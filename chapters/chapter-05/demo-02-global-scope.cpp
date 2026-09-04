// ============================================================
// demo-02-global-scope.cpp
// Objective: Show how a global variable is shared across every
// function in the file, and why that should be used sparingly.
// ============================================================

#include <iostream>

using namespace std;

int totalPlaysToday = 0;

void playSong() {
    cout << "Playing a song..." << endl;
    totalPlaysToday++;
}

int main() {
    playSong();
    playSong();

    cout << "Total plays today: " << totalPlaysToday << endl;

    return 0;
}
