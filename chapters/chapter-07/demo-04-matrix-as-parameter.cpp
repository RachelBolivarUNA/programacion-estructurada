// ============================================================
// demo-04-matrix-as-parameter.cpp
// Objective: Move two matrix operations into functions.
// main() calls them; it does not own the loops.
//
// C++ particularity: the column count must be fixed in the
// parameter type (the [4] below). The row count is a normal
// argument.
//
// A matrix is stored row by row. To reach column j of row i,
// the compiler has to know how wide each row is. That width
// is the column count, so it has to appear in the signature.
// The row count only says how many of those rows to visit,
// so it can be passed in when we call the function.
// ============================================================

#include <iostream>

using namespace std;

const int ROWS = 7;
const int COLS = 4;

// COLS is 4. The [4] in the parameter must match that width.
// `rows` is separate: the function can walk fewer or all of the rows.
int computeTotal(int matrix[][4], int rows) {
    int total = 0;
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < COLS; col++) {
            total = total + matrix[row][col];
        }
    }
    return total;
}

// foundRow and foundCol are set to -1 when target is missing.
// The & lets this function hand back both indexes (Chapter 04).
void findPlayCount(int matrix[][4], int rows, int target,
                   int &foundRow, int &foundCol) {
    foundRow = -1;
    foundCol = -1;
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < COLS; col++) {
            if (matrix[row][col] == target) {
                foundRow = row;
                foundCol = col;
                return;
            }
        }
    }
}

int main() {
    cout << "=== SoundWave Demo 04: Matrix as a Parameter ===" << endl;
    cout << endl;

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

    int total = computeTotal(genrePlays, ROWS);
    cout << "Weekly total: " << total << " plays" << endl;

    int target = 160;
    int foundRow = 0;
    int foundCol = 0;
    findPlayCount(genrePlays, ROWS, target, foundRow, foundCol);
    if (foundRow != -1) {
        cout << target << " plays: " << dayNames[foundRow] << " / "
             << genreNames[foundCol]
             << " (row " << foundRow << ", column " << foundCol << ")" << endl;
    } else {
        cout << target << " plays: not found" << endl;
    }

    int missing = 999;
    findPlayCount(genrePlays, ROWS, missing, foundRow, foundCol);
    if (foundRow != -1) {
        cout << missing << " plays: row " << foundRow
             << ", column " << foundCol << endl;
    } else {
        cout << missing << " plays: not found" << endl;
    }

    return 0;
}
