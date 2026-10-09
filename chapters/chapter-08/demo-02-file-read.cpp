// ============================================================
// demo-02-file-read.cpp
// Objective: Read a text file one line at a time.
//
// Reads session_log.txt, the log written by Demo 1.
// Run Demo 1 first, from this same folder.
// ============================================================

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "=== SoundWave Demo 02: Reading a Text File ===" << endl;
    cout << endl;

    ifstream inFile("session_log.txt");

    if (!inFile.is_open()) {
        cout << "Error: could not open session_log.txt." << endl;
        cout << "Run Demo 1 first, from this same folder." << endl;
        return 1;
    }

    cout << "Contents of session_log.txt:" << endl;
    cout << endl;

    string line;

    // getline reads one line and returns the stream.
    // As a loop condition, that stream is true when a line was read
    // and false when nothing is left (end of file) or the read fails.
    // The loop stops on its own. We do not count the lines first.
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    cout << endl;
    cout << "Finished reading session_log.txt." << endl;

    return 0;
}
