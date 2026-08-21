// ============================================================
// challenge-03-average-function.cpp
// Mini Challenge (Scene 3): write a function
// double average(double total, int count) that returns the average.
// ============================================================

#include <iostream>

using namespace std;

double average(double total, int count) {
    return total / count;
}

int main() {
    double totalMinutesListened = 120.0;
    int days = 4;

    cout << "Average minutes per day: " << average(totalMinutesListened, days) << endl;

    return 0;
}
