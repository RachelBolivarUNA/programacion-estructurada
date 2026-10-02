// ============================================================
// demo-01-file-write.cpp
// Objective: Open a text file, write several lines, and close it.
//
// SoundWave keeps a short log of songs played in one session.
// The log stays on disk after the program ends.
// ============================================================

#include <fstream>
#include <iostream>

using namespace std;

int main() {
    cout << "=== SoundWave Demo 01: Writing a Text File ===" << endl;
    cout << endl;

    // ofstream opens a file for writing.
    // If session_log.txt already exists, this replaces its contents.
    ofstream outFile("session_log.txt");

    if (!outFile.is_open()) {
        cout << "Error: could not open session_log.txt for writing." << endl;
        return 1;
    }

    // << works the same way as with cout.
    // The stream on the left is the file, not the console.
    outFile << "SoundWave session log" << endl;
    outFile << "Track: Midnight Drive | Genre: Pop" << endl;
    outFile << "Track: Neon Harbor | Genre: Electronic" << endl;
    outFile << "Track: Paper Lanterns | Genre: Jazz" << endl;
    outFile << "Tracks played: 3" << endl;

    // close() pushes any lines still sitting in the buffer out to
    // disk and releases the file. Until that happens, Demo 2 cannot
    // rely on seeing the full log. We close it here, on purpose,
    // before main ends.
    outFile.close();

    cout << "Wrote session_log.txt in this folder." << endl;
    cout << "Open it, or run Demo 2 to read it back." << endl;

    return 0;
}
