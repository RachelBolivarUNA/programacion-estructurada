// ============================================================
// demo-02-array-traversal.cpp
// Objective: Show how to traverse (walk through) every element
// of an array with a for loop, using a named constant for size
// instead of a "magic number".
// ============================================================

#include <iostream>

using namespace std;

int main() {
    cout << "=== SoundWave Demo 02: Array Traversal ===" << endl;
    cout << endl;

    // Use a named constant instead of repeating the number 5
    const int SIZE = 5;
    int trackDurations[SIZE] = {180, 220, 95, 310, 150};

    cout << "SoundWave playlist durations (seconds):" << endl;

    // Correct loop: i goes from 0 to SIZE - 1 (valid indices only)
    for (int i = 0; i < SIZE; i++) {
        cout << "Track " << i << ": " << trackDurations[i] << "s" << endl;
    }

    cout << endl;
    cout << "Traversal complete. Visited " << SIZE << " tracks." << endl;
    cout << endl;

    return 0;
}
