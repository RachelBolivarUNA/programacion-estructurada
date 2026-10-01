// ============================================================
// demo-02-matrix-traversal.cpp
// Objective: Walk every cell of a matrix with nested for loops.
//
// SoundWave plays for one week:
//   rows    = days  (0 Monday ... 6 Sunday)
//   columns = genres (0 Pop, 1 Rock, 2 Jazz, 3 Electronic)
// ============================================================

#include <iostream>

using namespace std;

int main() {
    cout << "=== SoundWave Demo 02: Matrix Traversal ===" << endl;
    cout << endl;

    // Named constants instead of repeating 7 and 4.
    const int ROWS = 7;
    const int COLS = 4;

    const char* dayNames[ROWS] = {
        "Monday", "Tuesday", "Wednesday", "Thursday",
        "Friday", "Saturday", "Sunday"
    };
    const char* genreNames[COLS] = {"Pop", "Rock", "Jazz", "Electronic"};

    int genrePlays[ROWS][COLS] = {
        {120, 85, 40, 95},
        {110, 90, 35, 100},
        {130, 70, 50, 115},
        {125, 80, 45, 105},
        {210, 160, 60, 190},
        {240, 200, 75, 230},
        {180, 150, 55, 170}
    };

    cout << "Columns: ";
    for (int col = 0; col < COLS; col++) {
        cout << col << " " << genreNames[col] << "   ";
    }
    cout << endl;
    cout << endl;

    // The outer loop controls the rows (one day per line).
    // The inner loop controls the columns (the genres on that day).
    // The newline is after the inner loop, so each day stays on one line.
    //
    // If the loops were swapped, each printed line would be one genre
    // down the whole week (a column) instead of one day across the
    // genres. The table would look transposed.
    for (int row = 0; row < ROWS; row++) {
        cout << "Row " << row << " (" << dayNames[row] << "): ";
        for (int col = 0; col < COLS; col++) {
            cout << genrePlays[row][col] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Traversal complete. Visited " << ROWS << " days and "
         << COLS << " genres." << endl;

    return 0;
}
