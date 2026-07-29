// ============================================================
// demo-01-variables.cpp
// Objective: Introduce string variables and show that their
//            values can change during the program.
// ============================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Create a string variable called name
    string name = "Rachel";

    cout << "Name: " << name << endl;

    // Modify the value stored in name
    name = "Alex";

    cout << "Updated name: " << name << endl;

    return 0;
}
