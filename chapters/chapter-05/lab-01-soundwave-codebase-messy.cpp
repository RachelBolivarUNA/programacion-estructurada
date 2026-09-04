// ============================================================
// lab-01-soundwave-codebase-messy.cpp
// Final integrative lab: starting "dirty" version of the
// SoundWave menu. It works, but it has duplicated playlist-
// printing code and an unnecessary global variable.
//
// Clean this up in lab-01-soundwave-codebase-cleanup.cpp:
// - The same three cout lines appear in viewPlaylist() and
//   searchArtist(). Extract them into a reusable function.
// - playCount is global only for convenience. It should live
//   in main() and be passed by reference to any function that
//   needs to update it.
// ============================================================

#include <iostream>
#include <string>

using namespace std;

int playCount = 0;

void playSong(string songName) {
    cout << "Now playing: " << songName << endl;
    playCount++;
}

void viewPlaylist() {
    cout << "1. Skyline Drive" << endl;
    cout << "2. Night Static" << endl;
    cout << "3. Paper Moon" << endl;
}

void searchArtist() {
    cout << "Searching for artist..." << endl;
    cout << "1. Skyline Drive" << endl;
    cout << "2. Night Static" << endl;
    cout << "3. Paper Moon" << endl;
}

bool isValidChoice(int choice) {
    return (choice >= 1 && choice <= 4);
}

int main() {
    string song = "Skyline Drive";
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
                playSong(song);
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
