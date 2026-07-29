// ============================================================
// demo-03-input-output.cpp
// Objective: Request information from the user with cin
//            and display a welcome message with cout.
// ============================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;
    string country;

    cout << "===== SoundWave Registration =====" << endl;
    cout << endl;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your country: ";
    cin >> country;

    cout << endl;
    cout << "Welcome to SoundWave, " << name << "!" << endl;
    cout << "Age: " << age << endl;
    cout << "Country: " << country << endl;
    cout << endl;
    cout << "Enjoy your music." << endl;

    return 0;
}
