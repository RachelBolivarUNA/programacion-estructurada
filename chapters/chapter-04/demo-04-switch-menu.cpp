// ============================================================
// demo-04-switch-menu.cpp
// Objective: Show how switch organizes a menu dispatch as a
// cleaner alternative to a chain of if/else statements.
// ============================================================

#include <iostream>
#include <string>

using namespace std;

void playSong(string songName) {
    cout << "Now playing: " << songName << endl;
}

void viewPlaylist() {
    cout << "1. Skyline Drive" << endl;
    cout << "2. Night Static" << endl;
    cout << "3. Paper Moon" << endl;
}

int main() {
    string song = "Skyline Drive";
    int choice;

    cout << "1. Play a song" << endl;
    cout << "2. View playlist" << endl;
    cout << "3. Search for an artist" << endl;
    cout << "4. Exit" << endl;
    cout << "Choose an option: ";
    cin >> choice;

    switch (choice) {
        case 1:
            playSong(song);
            break;
        case 2:
            viewPlaylist();
            break;
        case 3:
            cout << "Searching for artist..." << endl;
            break;
        case 4:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid option." << endl;
    }

    return 0;
}
