// ============================================================
// demo-02-parameters.cpp
// Objective: Show the difference between passing a parameter
// by value (a copy) and by reference (the original variable).
// ============================================================

#include <iostream>
#include <string>

using namespace std;

void playSong(string songName) {
    cout << "Now playing: " << songName << endl;
}

void incrementPlayCount(int &playCount) {
    playCount++;
}

int main() {
    string song = "Skyline Drive";
    int playCount = 0;

    playSong(song);
    incrementPlayCount(playCount);

    cout << "Play count: " << playCount << endl;

    return 0;
}
