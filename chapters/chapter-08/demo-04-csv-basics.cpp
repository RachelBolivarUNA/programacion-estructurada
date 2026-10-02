// ============================================================
// demo-04-csv-basics.cpp
// Objective: Write a plays grid to a CSV file and read it back.
//
// Same 7x4 grid as the genre-plays demos:
//   rows    = days  (Monday ... Sunday)
//   columns = genres (Pop, Rock, Jazz, Electronic)
//
// Each data line is: day,genre,plays
// Fields are split with stringstream and getline(..., ',').
// ============================================================

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    cout << "=== SoundWave Demo 04: CSV Basics ===" << endl;
    cout << endl;

    const int ROWS = 7;
    const int COLS = 4;
    const int TOTAL = ROWS * COLS;

    string dayNames[ROWS] = {
        "Monday", "Tuesday", "Wednesday", "Thursday",
        "Friday", "Saturday", "Sunday"
    };
    string genreNames[COLS] = {"Pop", "Rock", "Jazz", "Electronic"};

    int genrePlays[ROWS][COLS] = {
        {120, 85, 40, 95},
        {110, 90, 35, 100},
        {130, 70, 50, 115},
        {125, 80, 45, 105},
        {210, 160, 60, 190},
        {240, 200, 75, 230},
        {180, 150, 55, 170}
    };

    // --------------------------------------------------------
    // Write one row per day/genre. The first line names the columns.
    // --------------------------------------------------------
    ofstream outFile("genre_plays.csv");

    if (!outFile.is_open()) {
        cout << "Error: could not open genre_plays.csv for writing." << endl;
        return 1;
    }

    outFile << "day,genre,plays" << endl;
    for (int day = 0; day < ROWS; day++) {
        for (int genre = 0; genre < COLS; genre++) {
            outFile << dayNames[day] << "," << genreNames[genre] << ","
                    << genrePlays[day][genre] << endl;
        }
    }

    outFile.close();
    cout << "Wrote genre_plays.csv (" << TOTAL << " data rows)." << endl;
    cout << endl;

    // --------------------------------------------------------
    // Read the CSV back. Skip the header, then split each line
    // on commas. getline(ss, token, ',') stops at the next comma
    // instead of the end of the line, so each call pulls one field.
    // --------------------------------------------------------
    ifstream inFile("genre_plays.csv");

    if (!inFile.is_open()) {
        cout << "Error: could not open genre_plays.csv for reading." << endl;
        return 1;
    }

    string line;
    getline(inFile, line);

    cout << "Read back from genre_plays.csv:" << endl;

    int index = 0;
    bool matches = true;

    while (getline(inFile, line)) {
        stringstream ss(line);
        string dayToken;
        string genreToken;
        string playsToken;

        getline(ss, dayToken, ',');
        getline(ss, genreToken, ',');
        getline(ss, playsToken, ',');

        int plays = 0;
        stringstream playsStream(playsToken);
        playsStream >> plays;

        cout << "  " << dayToken << " | " << genreToken << " | "
             << plays << endl;

        if (index < TOTAL) {
            int day = index / COLS;
            int genre = index % COLS;
            if (dayToken != dayNames[day] || genreToken != genreNames[genre] ||
                plays != genrePlays[day][genre]) {
                matches = false;
            }
        } else {
            matches = false;
        }

        index++;
    }

    inFile.close();
    cout << endl;

    if (matches && index == TOTAL) {
        cout << "Read data matches the original grid (" << index
             << " rows)." << endl;
    } else {
        cout << "Read data does not match the original grid." << endl;
        return 1;
    }

    return 0;
}
