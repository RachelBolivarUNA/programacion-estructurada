// ============================================================
// demo-03-matrix-operations.cpp
// Objective: Basic matrix operations on SoundWave plays:
// total, one row, one column, max with its position, and search.
//
// Rows:    0 Monday ... 6 Sunday
// Columns: 0 Pop, 1 Rock, 2 Jazz, 3 Electronic
// ============================================================

#include <iostream>

using namespace std;

int main() {
    cout << "=== SoundWave Demo 03: Matrix Operations ===" << endl;
    cout << endl;

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

    // --------------------------------------------------------
    // 1) Total sum — one accumulator, both loops
    // --------------------------------------------------------
    int totalPlays = 0;
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            totalPlays = totalPlays + genrePlays[row][col];
        }
    }
    cout << "1) Total plays this week: " << totalPlays << endl;

    // --------------------------------------------------------
    // 2) Sum of one row — all genres on a single day
    // Row 4 is Friday.
    // --------------------------------------------------------
    int friday = 4;
    int fridayPlays = 0;
    for (int col = 0; col < COLS; col++) {
        fridayPlays = fridayPlays + genrePlays[friday][col];
    }
    cout << "2) " << dayNames[friday] << " (row " << friday << ") total: "
         << fridayPlays << endl;

    // --------------------------------------------------------
    // 3) Sum of one column — one genre across the week
    // Column 2 is Jazz.
    // --------------------------------------------------------
    int jazz = 2;
    int jazzPlays = 0;
    for (int row = 0; row < ROWS; row++) {
        jazzPlays = jazzPlays + genrePlays[row][jazz];
    }
    cout << "3) " << genreNames[jazz] << " (column " << jazz << ") total: "
         << jazzPlays << endl;

    // --------------------------------------------------------
    // 4) Maximum and where it sits (row and column, not just the value)
    // Start with cell [0][0] as the candidate.
    // --------------------------------------------------------
    int maxPlays = genrePlays[0][0];
    int maxRow = 0;
    int maxCol = 0;
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            if (genrePlays[row][col] > maxPlays) {
                maxPlays = genrePlays[row][col];
                maxRow = row;
                maxCol = col;
            }
        }
    }
    cout << "4) Busiest cell: " << maxPlays << " plays on "
         << dayNames[maxRow] << " / " << genreNames[maxCol]
         << " (row " << maxRow << ", column " << maxCol << ")" << endl;

    // --------------------------------------------------------
    // 5) Search for a specific value
    // foundRow and foundCol stay -1 when the value is missing.
    // A plain break would leave only the inner loop, so the
    // condition stops both loops after the first match.
    // --------------------------------------------------------
    int targetPlays = 160;
    int foundRow = -1;
    int foundCol = -1;
    bool found = false;
    for (int row = 0; row < ROWS && !found; row++) {
        for (int col = 0; col < COLS && !found; col++) {
            if (genrePlays[row][col] == targetPlays) {
                foundRow = row;
                foundCol = col;
                found = true;
            }
        }
    }

    if (foundRow != -1) {
        cout << "5) " << targetPlays << " plays found on "
             << dayNames[foundRow] << " / " << genreNames[foundCol]
             << " (row " << foundRow << ", column " << foundCol << ")" << endl;
    } else {
        cout << "5) " << targetPlays << " plays: not found" << endl;
    }

    int missingPlays = 999;
    foundRow = -1;
    foundCol = -1;
    found = false;
    for (int row = 0; row < ROWS && !found; row++) {
        for (int col = 0; col < COLS && !found; col++) {
            if (genrePlays[row][col] == missingPlays) {
                foundRow = row;
                foundCol = col;
                found = true;
            }
        }
    }

    if (foundRow != -1) {
        cout << "   " << missingPlays << " plays found at row " << foundRow
             << ", column " << foundCol << endl;
    } else {
        cout << "   " << missingPlays << " plays: not found (-1, -1)" << endl;
    }

    return 0;
}
