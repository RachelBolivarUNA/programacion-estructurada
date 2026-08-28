// ============================================================
// demo-03-return-values.cpp
// Objective: Show how a function can return a value instead of
// just performing an action.
// ============================================================

#include <iostream>

using namespace std;

bool isValidRating(int rating) {
    return (rating >= 1 && rating <= 5);
}

int main() {
    int rating = 6;

    if (isValidRating(rating)) {
        cout << "Thanks for your rating!" << endl;
    } else {
        cout << "Invalid rating. Please enter a number between 1 and 5." << endl;
    }

    return 0;
}
