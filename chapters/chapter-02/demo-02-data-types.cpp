// ============================================================
// demo-02-data-types.cpp
// Objective: Introduce the basic data types used in SoundWave:
//            string, int, double, and bool.
// ============================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
    // string: text information
    string userName = "Maria";

    // int: whole numbers
    int age = 21;

    // double: numbers with decimals
    double minutesListened = 145.5;

    // bool: true or false values
    bool premium = true;

    cout << "===== SoundWave User Profile =====" << endl;
    cout << endl;
    cout << "User name:         " << userName << endl;
    cout << "Age:               " << age << endl;
    cout << "Minutes listened:  " << minutesListened << endl;
    cout << "Premium account:   " << premium << endl;
    cout << endl;
    cout << "==================================" << endl;

    return 0;
}
