// ============================================================
// demo-03-file-error-handling.cpp
// Objective: Notice a failed open, and a successful one.
//
// Error handling in this chapter is an if on is_open().
// It is not try/catch. That topic comes in a later chapter.
// ============================================================

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "=== SoundWave Demo 03: File Error Handling ===" << endl;
    cout << endl;

    // --------------------------------------------------------
    // Case 1: a file that is not in this folder.
    // is_open() is false, so we print an error and do not read.
    // Without this if, the loop below would simply never run
    // and the program would look like it succeeded.
    // --------------------------------------------------------
    cout << "1) Opening a file that does not exist" << endl;
    ifstream missingFile("does_not_exist.txt");

    if (!missingFile.is_open()) {
        cout << "   Error: could not open does_not_exist.txt." << endl;
        cout << "   The file is not in this folder." << endl;
    } else {
        missingFile.close();
    }
    cout << endl;

    // --------------------------------------------------------
    // Case 2: session_log.txt from Demo 1. This open should work.
    // Run Demo 1 first, from this same folder.
    // --------------------------------------------------------
    cout << "2) Opening a file that does exist" << endl;
    ifstream logFile("session_log.txt");

    if (!logFile.is_open()) {
        cout << "   Error: could not open session_log.txt." << endl;
        cout << "   Run Demo 1 first, from this same folder." << endl;
        return 1;
    }

    cout << "   Opened session_log.txt successfully." << endl;

    string line;
    while (getline(logFile, line)) {
        cout << "   " << line << endl;
    }

    logFile.close();
    cout << endl;

    cout << "Demo complete. A failed open is an if, not a crash." << endl;

    return 0;
}
