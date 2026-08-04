// ============================================================
// demo-02-conditionals.cpp
// Objective: Show how if/else lets a program make decisions
// using relational and logical operators.
// ============================================================

#include <iostream>

using namespace std;

int main() {
    int rating;

    cout << "Rate this song (1-5): ";
    cin >> rating;

    if (rating >= 1 && rating <= 5) {
        cout << "Thanks for your rating!" << endl;
    } else {
        cout << "Invalid rating. Please enter a number between 1 and 5." << endl;
    }

    return 0;
}
