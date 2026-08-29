// ============================================================
// lab-01-soundwave-codebase-cleanup.cpp
// Final integrative lab: clean up a messy version of the
// SoundWave menu that had duplicated playlist-printing code
// and an unnecessary global variable. This file is the
// cleaned-up result.
//
// What changed from the starting "dirty" version handed out
// in class (lab-01-soundwave-codebase-messy.cpp):
// - Playlist-printing code that was duplicated in two functions
//   is now a single reusable printPlaylist() function.
// - The play counter, which was a global variable in the dirty
//   version, is a parameter passed by reference instead — only
//   main() owns it, and any function that needs it receives it
//   explicitly.
// ============================================================

#include <iostream>
#include <string>

using namespace std;

void printPlaylist() {
    cout << "1. Skyline Drive" << endl;
    cout << "2. Night Static" << endl;
    cout << "3. Paper Moon" << endl;
}

void playSong(string songName, int &playCount) {
    cout << "Now playing: " << songName << endl;
    playCount++;
}

void viewPlaylist() {
    printPlaylist();
}

void searchArtist() {
    cout << "Searching for artist..." << endl;
    printPlaylist();
}

bool isValidChoice(int choice) {
    return (choice >= 1 && choice <= 4);
}

int main() {
    string song = "Skyline Drive";
    int playCount = 0;
    int choice;

    do {
        cout << "1. Play a song" << endl;
        cout << "2. View playlist" << endl;
        cout << "3. Search for an artist" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        if (!isValidChoice(choice)) {
            cout << "Invalid option." << endl;
            continue;
        }

        switch (choice) {
            case 1:
                playSong(song, playCount);
                break;
            case 2:
                viewPlaylist();
                break;
            case 3:
                searchArtist();
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
        }

    } while (choice != 4);

    cout << "Total songs played: " << playCount << endl;

    return 0;
}
