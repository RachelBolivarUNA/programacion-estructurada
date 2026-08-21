// ============================================================
// lab-01-soundwave-menu-refactor.cpp
// Final integrative lab: refactor SoundWave's main menu using
// functions, switch, a by-reference parameter, and a function
// that returns a value.
// ============================================================

#include <iostream>
#include <string>

using namespace std;

void playSong(string songName, int &playCount) {
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
