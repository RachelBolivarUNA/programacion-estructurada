// ============================================================
// demo-01-matrix-declaration.cpp
// Objective: Show how to declare, initialize, and access a
// two-dimensional array (a matrix).
//
// SoundWave tracks plays by day and genre:
//   rows    = days  (0 Monday ... 6 Sunday)
//   columns = genres (0 Pop, 1 Rock, 2 Jazz, 3 Electronic)
// ============================================================

#include <iostream>

using namespace std;

int main() {
    cout << "=== SoundWave Demo 01: Matrix Declaration ===" << endl;
    cout << endl;

    // --------------------------------------------------------
    // Step 1: Declare a fixed-size matrix
    // 7 rows (one per day), 4 columns (one per genre).
    // Declaring reserves the slots. It does not fill them.
    // --------------------------------------------------------
    cout << "Step 1: Declare a fixed-size matrix" << endl;
    int genrePlays[7][4];
    cout << "  Declared: int genrePlays[7][4];" << endl;
    cout << "  7 rows = days of the week (indexes 0 to 6)." << endl;
    cout << "  4 columns = genres (indexes 0 to 3)." << endl;
    cout << "  Column 0 Pop, 1 Rock, 2 Jazz, 3 Electronic." << endl;
    cout << endl;

    // --------------------------------------------------------
    // Step 2: Initialize with nested lists
    // A shorter 3-day sample keeps the braces easy to read.
    // Each inner list is one row (one day).
    // --------------------------------------------------------
    cout << "Step 2: Initialize a matrix with nested lists" << endl;
    int samplePlays[3][4] = {
        {120, 85, 40, 95},    // Monday
        {110, 90, 35, 100},   // Tuesday
        {130, 70, 50, 115}    // Wednesday
    };
    cout << "  Declared a 3x4 sample (Monday to Wednesday)." << endl;
    cout << "  Each inner { } is one row." << endl;
    // Row 1, column 3: Tuesday, Electronic.
    cout << "  samplePlays[1][3] = " << samplePlays[1][3]
         << " (Tuesday, Electronic)" << endl;
    cout << endl;

    // --------------------------------------------------------
    // Step 3: Access elements with a double index
    // genrePlays[row][column]
    //   [0][2] -> row 0 is Monday, column 2 is Jazz
    //   [0][0] -> row 0 is Monday, column 0 is Pop
    // --------------------------------------------------------
    cout << "Step 3: Access elements with a double index" << endl;
    genrePlays[0][0] = 120;
    genrePlays[0][2] = 40;

    cout << "  genrePlays[0][2] = " << genrePlays[0][2] << endl;
    cout << "  Row 0 is Monday. Column 2 is Jazz." << endl;
    cout << "  genrePlays[0][0] = " << genrePlays[0][0] << endl;
    cout << "  Row 0 is Monday. Column 0 is Pop." << endl;
    cout << endl;

    // --------------------------------------------------------
    // Step 4 is comments only. We do not run it.
    //
    // genrePlays has rows 0..6 and columns 0..3.
    // Swapping the indexes reads a different cell:
    //   genrePlays[0][2] is Monday / Jazz
    //   genrePlays[2][0] is Wednesday / Pop
    // Same two numbers, opposite meaning.
    //
    // These indexes are outside the matrix, so this demo
    // never executes them. The result would be undefined:
    //   cout << genrePlays[0][4];  // columns only go 0..3
    //   cout << genrePlays[7][0];  // rows only go 0..6
    // --------------------------------------------------------
    cout << "Step 4: Row/column mix-ups stay commented out" << endl;
    cout << "  genrePlays[0][2] is Monday / Jazz." << endl;
    cout << "  genrePlays[2][0] would be Wednesday / Pop." << endl;
    cout << "  genrePlays[0][4] and genrePlays[7][0] are out of range." << endl;
    cout << "  Those reads are comments in this file, not running code." << endl;
    cout << endl;

    cout << "Demo complete. First index is the row, second is the column." << endl;

    return 0;
}
