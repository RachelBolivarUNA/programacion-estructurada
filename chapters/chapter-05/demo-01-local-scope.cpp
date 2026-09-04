// ============================================================
// demo-01-local-scope.cpp
// Objective: Show that a local variable only exists inside the
// function where it's declared, even if another function uses
// a variable with the same name.
// ============================================================

#include <iostream>

using namespace std;

void playSong() {
    int count = 1;
    cout << "Playing song number " << count << endl;
}

void viewPlaylist() {
    int count = 3;
    cout << "Playlist has " << count << " songs" << endl;
}

int main() {
    playSong();
    viewPlaylist();
    return 0;
}
