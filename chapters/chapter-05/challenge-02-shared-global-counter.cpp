// ============================================================
// challenge-02-shared-global-counter.cpp
// Mini Challenge (Scene 2): add a second function that also
// uses the global totalPlaysToday counter, and confirm both
// functions share the same value.
// ============================================================

#include <iostream>

using namespace std;

int totalPlaysToday = 0;

void playSong() {
    cout << "Playing a song..." << endl;
    totalPlaysToday++;
}

void skipSong() {
    cout << "Skipping to the next song..." << endl;
    totalPlaysToday++;
}

int main() {
    playSong();
    skipSong();
    playSong();

    cout << "Total plays today: " << totalPlaysToday << endl;

    return 0;
}
