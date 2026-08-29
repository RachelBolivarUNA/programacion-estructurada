// ============================================================
// challenge-03-split-login-function.cpp
// Mini Challenge (Scene 3): the original loginUser() function
// did three things at once (ask for credentials, validate the
// format, and show a welcome message). Split it into three
// functions, each with a single responsibility.
// ============================================================

#include <iostream>
#include <string>

using namespace std;

string askUsername() {
    string username;
    cout << "Username: ";
    cin >> username;
    return username;
}

bool isValidUsername(string username) {
    return (username.length() > 0);
}

void showWelcomeMessage(string username) {
    cout << "Welcome, " << username << "!" << endl;
}

int main() {
    string username = askUsername();

    if (isValidUsername(username)) {
        showWelcomeMessage(username);
    } else {
        cout << "Invalid username." << endl;
    }

    return 0;
}
