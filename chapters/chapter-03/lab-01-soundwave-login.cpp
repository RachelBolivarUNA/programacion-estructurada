// ============================================================
// lab-01-soundwave-login.cpp
// Final integrative lab: simulate SoundWave's login screen.
// Combines conditionals and loops.
//
// Program flow:
// - Ask for credentials (username and password).
// - Retry if the login fails, up to a maximum of 3 attempts.
// - Final result: "Login successful" or "Account locked".
// ============================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
    const string CORRECT_USERNAME = "soundwave_user";
    const string CORRECT_PASSWORD = "soundwave123";
    const int MAX_ATTEMPTS = 3;

    string username, password;
    int attempts = 0;
    bool loggedIn = false;

    cout << "Username: ";
    cin >> username;

    do {
        cout << "Password: ";
        cin >> password;
        attempts++;

        if (username == CORRECT_USERNAME && password == CORRECT_PASSWORD) {
            loggedIn = true;
        } else if (attempts < MAX_ATTEMPTS) {
            cout << "Incorrect password. Try again." << endl;
        }

    } while (!loggedIn && attempts < MAX_ATTEMPTS);

    if (loggedIn) {
        cout << "Login successful!" << endl;
    } else {
        cout << "Account locked. Too many failed attempts." << endl;
    }

    return 0;
}
