// ============================================================
// demo-01-arithmetic-operators.cpp
// Objective: Show how arithmetic and compound assignment
// operators let a program transform information it already knows.
// ============================================================

#include <iostream>

using namespace std;

int main() {
    int playCount = 0;
    double totalMinutesListened = 0.0;

    // The song was played once
    playCount++;
    totalMinutesListened += 3.5; // duration of the song just played

    cout << "Play count: " << playCount << endl;
    cout << "Minutes listened: " << totalMinutesListened << endl;

    // The song was played again, with a different duration
    playCount++;
    totalMinutesListened += 4.2;

    cout << "Play count: " << playCount << endl;
    cout << "Minutes listened: " << totalMinutesListened << endl;

    return 0;
}
