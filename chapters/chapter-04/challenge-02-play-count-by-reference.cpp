// ============================================================
// challenge-02-play-count-by-reference.cpp
// Mini Challenge (Scene 2): write a function that receives a
// username by value and a play count by reference, and
// increments the counter each time it's called.
// ============================================================

#include <iostream>
#include <string>

using namespace std;

void registerPlay(string username, int &playCount) {
    cout << username << " played a song." << endl;
    playCount++;
}

int main() {
    string username = "alex_music";
    int playCount = 0;

    registerPlay(username, playCount);
    registerPlay(username, playCount);

    cout << "Total plays: " << playCount << endl;

    return 0;
}
