// ============================================================
// challenge-01-linear-search.cpp
// Mini Challenge (in-class): implement linear search over a
// SoundWave playlist of track durations.
//
// This file is the reference solution for students who review
// the repo after class.
// ============================================================

#include <iostream>

using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // found: return the position
        }
    }
    return -1;  // not found
}

int main() {
    cout << "=== SoundWave Challenge: Linear Search ===" << endl;
    cout << endl;

    const int SIZE = 6;
    int trackDurations[SIZE] = {180, 220, 95, 310, 150, 275};

    // Case 1: the value EXISTS in the playlist
    int existingDuration = 310;
    int foundIndex = linearSearch(trackDurations, SIZE, existingDuration);
    cout << "Looking for " << existingDuration << "s..." << endl;
    if (foundIndex != -1) {
        cout << "  Found at index " << foundIndex << endl;
    } else {
        cout << "  Not found (returned -1)" << endl;
    }
    cout << endl;

    // Case 2: the value does NOT exist in the playlist
    int missingDuration = 400;
    int missingIndex = linearSearch(trackDurations, SIZE, missingDuration);
    cout << "Looking for " << missingDuration << "s..." << endl;
    if (missingIndex != -1) {
        cout << "  Found at index " << missingIndex << endl;
    } else {
        cout << "  Not found (returned -1)" << endl;
    }

    return 0;
}
