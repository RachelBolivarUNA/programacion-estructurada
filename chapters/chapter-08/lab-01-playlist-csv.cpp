// ============================================================
// lab-01-playlist-csv.cpp
// Individual homework reference solution (not graded, not a
// group lab). Students work through it on their own first, then
// compare with this file.
//
// A SoundWave playlist (song, genre, duration in seconds) is
// already stored in arrays. No keyboard input.
//
//   1. Write the rows to playlist.csv.
//   2. Read that CSV back and split each line with stringstream.
//   3. Print the rows that were read.
//   4. Report a clear error if a file cannot be opened.
//
// Open failures use if and is_open(). This chapter does not
// use try/catch.
// ============================================================

#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Returns false when the file cannot be opened for writing.
bool writePlaylist(const string &filename,
                   string songNames[],
                   string genres[],
                   int durations[],
                   int size) {
    ofstream outFile(filename);

    if (!outFile.is_open()) {
        cout << "Error: could not open " << filename << " for writing." << endl;
        return false;
    }

    outFile << "song,genre,duration" << endl;
    for (int i = 0; i < size; i++) {
        outFile << songNames[i] << "," << genres[i] << ","
                << durations[i] << endl;
    }

    // close() flushes the playlist to disk and releases the file
    // before a later read opens it again.
    outFile.close();
    return true;
}

// Reads data rows into the arrays. count is how many songs were read.
// The first line of the file is the column header, so it is skipped.
// Returns false when the file cannot be opened.
bool readPlaylist(const string &filename,
                  string songNames[],
                  string genres[],
                  int durations[],
                  int size,
                  int &count) {
    ifstream inFile(filename);

    if (!inFile.is_open()) {
        cout << "Error: could not open " << filename << " for reading." << endl;
        return false;
    }

    count = 0;

    string line;
    getline(inFile, line);

    while (getline(inFile, line) && count < size) {
        stringstream ss(line);
        string song;
        string genre;
        string durationText;

        getline(ss, song, ',');
        getline(ss, genre, ',');
        getline(ss, durationText, ',');

        int duration = 0;
        stringstream durationStream(durationText);
        durationStream >> duration;

        songNames[count] = song;
        genres[count] = genre;
        durations[count] = duration;
        count++;
    }

    inFile.close();
    return true;
}

void printPlaylist(string songNames[],
                   string genres[],
                   int durations[],
                   int count) {
    cout << left;
    cout << setw(18) << "Song" << setw(14) << "Genre" << "Seconds" << endl;
    cout << setw(18) << "----" << setw(14) << "-----" << "-------" << endl;

    for (int i = 0; i < count; i++) {
        cout << setw(18) << songNames[i]
             << setw(14) << genres[i]
             << durations[i] << endl;
    }
}

int main() {
    cout << "=== SoundWave Homework: Playlist CSV ===" << endl;
    cout << endl;

    const int SIZE = 5;

    string songNames[SIZE] = {
        "Midnight Drive",
        "Neon Harbor",
        "Paper Lanterns",
        "Static Hearts",
        "Golden Hour"
    };
    string genres[SIZE] = {"Pop", "Electronic", "Jazz", "Rock", "Pop"};
    int durations[SIZE] = {210, 245, 198, 186, 223};

    cout << "Playlist in memory:" << endl;
    printPlaylist(songNames, genres, durations, SIZE);
    cout << endl;

    // This folder is not in the project on purpose.
    // ofstream does not create missing folders, so is_open() is false.
    cout << "Write attempt (folder does not exist):" << endl;
    writePlaylist("no_such_folder/playlist.csv",
                  songNames, genres, durations, SIZE);
    cout << endl;

    cout << "Write attempt (playlist.csv):" << endl;
    if (!writePlaylist("playlist.csv", songNames, genres, durations, SIZE)) {
        return 1;
    }
    cout << "Wrote playlist.csv." << endl;
    cout << endl;

    string readSongs[SIZE];
    string readGenres[SIZE];
    int readDurations[SIZE] = {0, 0, 0, 0, 0};
    int readCount = 0;

    cout << "Read playlist.csv:" << endl;
    if (!readPlaylist("playlist.csv",
                      readSongs, readGenres, readDurations, SIZE, readCount)) {
        return 1;
    }
    cout << "Read " << readCount << " songs." << endl;
    cout << endl;

    cout << "Playlist read from the file:" << endl;
    printPlaylist(readSongs, readGenres, readDurations, readCount);
    cout << endl;

    cout << "Read attempt (file does not exist):" << endl;
    int ignoredCount = 0;
    readPlaylist("missing_playlist.csv",
                 readSongs, readGenres, readDurations, SIZE, ignoredCount);

    return 0;
}
