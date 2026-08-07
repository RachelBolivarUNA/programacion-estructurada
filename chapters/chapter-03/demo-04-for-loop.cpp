// ============================================================
// demo-04-for-loop.cpp
// Objective: Show how a for loop repeats an action a known
// number of times — useful when you know in advance how many
// times something needs to happen.
// ============================================================

#include <iostream>

using namespace std;

int main() {
    const int SONGS_IN_QUEUE = 5;

    for (int i = 1; i <= SONGS_IN_QUEUE; i++) {
        cout << "Playing song " << i << " of " << SONGS_IN_QUEUE << "..." << endl;
    }

    cout << "Queue finished." << endl;

    return 0;
}
