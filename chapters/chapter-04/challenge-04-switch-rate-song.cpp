// ============================================================
// challenge-04-switch-rate-song.cpp
// Mini Challenge (Scene 4): add a case 5 ("Rate this song") to
// the menu switch that calls isValidRating from Scene 3.
// ============================================================

#include <iostream>

using namespace std;

bool isValidRating(int rating) {
    return (rating >= 1 && rating <= 5);
}

int main() {
    int choice;

    cout << "1. Play a song" << endl;
    cout << "2. View playlist" << endl;
    cout << "3. Search for an artist" << endl;
    cout << "4. Exit" << endl;
    cout << "5. Rate this song" << endl;
    cout << "Choose an option: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Now playing..." << endl;
            break;
        case 2:
            cout << "Showing playlist..." << endl;
            break;
        case 3:
            cout << "Searching for artist..." << endl;
            break;
        case 4:
            cout << "Goodbye!" << endl;
            break;
        case 5: {
            // braces needed here because we declare a variable
            // inside this case
            int rating;
            cout << "Rate this song (1-5): ";
            cin >> rating;
            if (isValidRating(rating)) {
                cout << "Thanks for your rating!" << endl;
            } else {
                cout << "Invalid rating." << endl;
            }
            break;
        }
        default:
            cout << "Invalid option." << endl;
    }

    return 0;
}
