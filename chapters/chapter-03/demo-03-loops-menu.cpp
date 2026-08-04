// ============================================================
// demo-03-loops-menu.cpp
// Objective: Show how a do-while loop lets a program repeat
// its main menu until the user decides to exit.
// ============================================================

#include <iostream>

using namespace std;

int main() {
    int choice;

    do {
        cout << "1. Play a song" << endl;
        cout << "2. View playlist" << endl;
        cout << "3. Search for an artist" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        // In a full program, each option would call a different
        // function. For this demo we only show the menu repeating.

    } while (choice != 4);

    cout << "Goodbye!" << endl;

    return 0;
}
