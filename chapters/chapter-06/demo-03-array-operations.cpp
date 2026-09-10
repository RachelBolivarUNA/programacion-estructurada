// ============================================================
// demo-03-array-operations.cpp
// Objective: Show common one-dimensional array operations on
// SoundWave track durations: sum, average, max, min, linear
// search, and update.
// ============================================================

#include <iostream>

using namespace std;

int main() {
    cout << "=== SoundWave Demo 03: Array Operations ===" << endl;
    cout << endl;

    const int SIZE = 5;
    int trackDurations[SIZE] = {180, 220, 95, 310, 150};

    // --------------------------------------------------------
    // 1) Total sum (accumulator pattern)
    // --------------------------------------------------------
    int totalSeconds = 0;
    for (int i = 0; i < SIZE; i++) {
        totalSeconds = totalSeconds + trackDurations[i];
    }
    cout << "1) Total playlist duration: " << totalSeconds << "s" << endl;

    // --------------------------------------------------------
    // 2) Average — cast to double so we keep the fractional part
    // Integer division (int / int) would truncate; we need
    // floating-point division for a real average.
    // --------------------------------------------------------
    double averageSeconds = static_cast<double>(totalSeconds) / SIZE;
    cout << "2) Average track duration: " << averageSeconds << "s" << endl;

    // --------------------------------------------------------
    // 3) Maximum and minimum ("current candidate" pattern)
    // Start with the first element as the candidate, then compare.
    // --------------------------------------------------------
    int maxDuration = trackDurations[0];
    int minDuration = trackDurations[0];
    for (int i = 1; i < SIZE; i++) {
        if (trackDurations[i] > maxDuration) {
            maxDuration = trackDurations[i];
        }
        if (trackDurations[i] < minDuration) {
            minDuration = trackDurations[i];
        }
    }
    cout << "3) Longest track: " << maxDuration << "s" << endl;
    cout << "   Shortest track: " << minDuration << "s" << endl;

    // --------------------------------------------------------
    // 4) Linear search — walk the array until we find the value
    // Return the index if found, or -1 if not found.
    // --------------------------------------------------------
    int targetDuration = 310;
    int foundIndex = -1;
    for (int i = 0; i < SIZE; i++) {
        if (trackDurations[i] == targetDuration) {
            foundIndex = i;
            break;
        }
    }
    if (foundIndex != -1) {
        cout << "4) Duration " << targetDuration << "s found at index "
             << foundIndex << endl;
    } else {
        cout << "4) Duration " << targetDuration << "s not found (-1)" << endl;
    }

    // --------------------------------------------------------
    // 5) Update an element at a valid index
    // --------------------------------------------------------
    int updateIndex = 2;
    int newDuration = 200;
    cout << "5) Updating track at index " << updateIndex
         << " from " << trackDurations[updateIndex] << "s to "
         << newDuration << "s" << endl;
    trackDurations[updateIndex] = newDuration;
    cout << "   trackDurations[" << updateIndex << "] is now "
         << trackDurations[updateIndex] << "s" << endl;

    return 0;
}
