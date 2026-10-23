// ============================================================
// demo-01-try-catch-basics.cpp
// Objective: Show throw, try, and catch with std::runtime_error.
// SoundWave needs plays-per-listener; division by zero must not
// crash the whole program.
// ============================================================

#include <iostream>
#include <stdexcept>

using namespace std;

// Returns average plays per listener.
// Throws if there are no listeners (cannot divide by zero).
double divide(double totalPlays, double listeners) {
    if (listeners == 0) {
        throw runtime_error("Cannot divide by zero: no listeners yet.");
    }
    return totalPlays / listeners;
}

int main() {
    cout << "=== SoundWave Demo 01: try / catch Basics ===" << endl;
    cout << endl;

    // Successful case: a real average
    cout << "Case 1: 1200 plays across 40 listeners" << endl;
    try {
        double average = divide(1200.0, 40.0);
        cout << "  Average plays per listener: " << average << endl;
    } catch (const runtime_error& error) {
        cout << "  Error: " << error.what() << endl;
    }
    cout << endl;

    // Failing case: zero listeners
    cout << "Case 2: 500 plays across 0 listeners" << endl;
    try {
        double average = divide(500.0, 0.0);
        cout << "  Average plays per listener: " << average << endl;
    } catch (const runtime_error& error) {
        // error.what() returns the message passed to the throw
        cout << "  Caught error: " << error.what() << endl;
    }
    cout << endl;

    // Proof that the program continues after the catch
    cout << "Case 3: program continues after catch" << endl;
    cout << "  SoundWave is still running. Ready for the next report." << endl;
    cout << endl;

    cout << "Demo complete." << endl;

    return 0;
}
