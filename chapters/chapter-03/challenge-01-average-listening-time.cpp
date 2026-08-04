// ============================================================
// challenge-01-average-listening-time.cpp
// Mini Challenge (Scene 1): given a total number of minutes
// listened and a number of days, calculate the average minutes
// listened per day. Use only arithmetic operators (no if, no loops).
// ============================================================

#include <iostream>

using namespace std;

int main() {
    double totalMinutesListened;
    int days;

    cout << "Total minutes listened: ";
    cin >> totalMinutesListened;

    cout << "Number of days: ";
    cin >> days;

    double averageMinutesPerDay = totalMinutesListened / days;

    cout << "Average minutes per day: " << averageMinutesPerDay << endl;

    return 0;
}
