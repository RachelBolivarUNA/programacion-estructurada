// ============================================================
// challenge-03-valid-rating-loop.cpp
// Mini Challenge (Scene 3): keep asking the user for a song
// rating until they enter a valid value between 1 and 5.
// Combines a loop with the conditional from Scene 2.
// ============================================================

#include <iostream>

using namespace std;

int main() {
    int rating;

    cout << "Rate this song (1-5): ";
    cin >> rating;

    while (rating < 1 || rating > 5) {
        cout << "Invalid rating. Please enter a number between 1 and 5: ";
        cin >> rating;
    }

    cout << "Thanks for your rating!" << endl;

    return 0;
}
