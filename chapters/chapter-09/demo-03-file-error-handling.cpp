// ============================================================
// demo-03-file-error-handling.cpp
// Objective: Combine file reading (Chapter 08) with try/catch.
// SoundWave reads song play counts from a CSV. A corrupt line
// is reported; the rest of the file is still processed.
// ============================================================

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdexcept>

using namespace std;

int main() {
    cout << "=== SoundWave Demo 03: File Error Handling ===" << endl;
    cout << endl;

    ifstream file("song_plays.csv");
    if (!file.is_open()) {
        cout << "Could not open song_plays.csv" << endl;
        cout << "Run this program from the chapter-09 folder." << endl;
        return 1;
    }

    string line;
    int lineNumber = 0;
    int totalPlays = 0;
    int songsProcessed = 0;
    int corruptLines = 0;

    // Skip the header row
    getline(file, line);
    lineNumber++;

    while (getline(file, line)) {
        lineNumber++;

        // Expected format: song_id,title,plays
        stringstream ss(line);
        string songId;
        string title;
        string playsText;

        getline(ss, songId, ',');
        getline(ss, title, ',');
        getline(ss, playsText, ',');

        try {
            int plays = stoi(playsText);
            totalPlays += plays;
            songsProcessed++;
            cout << "Line " << lineNumber << ": \"" << title
                 << "\" -> " << plays << " plays" << endl;
        } catch (const invalid_argument& error) {
            corruptLines++;
            cout << "Line " << lineNumber << ": corrupt plays value \""
                 << playsText << "\" for \"" << title << "\" — skipped." << endl;
            cout << "  Details: " << error.what() << endl;
        } catch (const out_of_range& error) {
            corruptLines++;
            cout << "Line " << lineNumber << ": plays value out of range for \""
                 << title << "\" — skipped." << endl;
            cout << "  Details: " << error.what() << endl;
        }
    }

    file.close();

    cout << endl;
    cout << "Summary" << endl;
    cout << "  Songs processed: " << songsProcessed << endl;
    cout << "  Corrupt lines skipped: " << corruptLines << endl;
    cout << "  Total plays (valid rows only): " << totalPlays << endl;
    cout << endl;
    cout << "Demo complete. One bad row did not stop the rest of the file." << endl;

    return 0;
}
