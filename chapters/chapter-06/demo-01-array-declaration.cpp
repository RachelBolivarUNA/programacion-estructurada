// ============================================================
// demo-01-array-declaration.cpp
// Objective: Show how to declare, initialize, and access a
// one-dimensional array — using SoundWave track durations
// (in seconds) as the data.
// ============================================================

#include <iostream>

using namespace std;

int main() {
    cout << "=== SoundWave Demo 01: Array Declaration ===" << endl;
    cout << endl;

    // Step 1: Declare a fixed-size array (values are not set yet)
    cout << "Step 1: Declare a fixed-size array" << endl;
    int trackDurations[5];
    cout << "  Declared: int trackDurations[5];" << endl;
    cout << "  (five slots reserved; we have not assigned values yet)" << endl;
    cout << endl;

    // Step 2: Initialize an array with known values at declaration
    cout << "Step 2: Initialize an array with values" << endl;
    int initializedDurations[5] = {180, 220, 95, 310, 150};
    cout << "  Declared: int initializedDurations[5] = {180, 220, 95, 310, 150};" << endl;
    cout << "  These are track lengths in seconds for a SoundWave playlist." << endl;
    cout << endl;

    // Step 3: Access elements by index
    // The first element is always at index 0 (not 1).
    cout << "Step 3: Access elements by index (first index is 0)" << endl;
    cout << "  initializedDurations[0] = " << initializedDurations[0] << "s" << endl;
    cout << "  initializedDurations[3] = " << initializedDurations[3] << "s" << endl;
    cout << endl;

    // Step 4: Assign values into the uninitialized array
    cout << "Step 4: Assign values into trackDurations" << endl;
    trackDurations[0] = 180;
    trackDurations[1] = 220;
    cout << "  trackDurations[0] = " << trackDurations[0] << "s" << endl;
    cout << "  trackDurations[1] = " << trackDurations[1] << "s" << endl;
    cout << endl;

    cout << "Demo complete. Valid indices for size 5 are 0 through 4." << endl;

    return 0;
}
