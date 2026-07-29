// ============================================================
// demo-04-updating-variables.cpp
// Objective: Show how a variable can be updated several times.
//
// Why is the variable called playCount?
// Because its name describes the information it stores:
// the number of times a song has been played.
// Good names make the code easier to understand.
// ============================================================

#include <iostream>

using namespace std;

int main() {
    // playCount starts at 0 because the song has not been played yet
    int playCount = 0;

    cout << "Play count: " << playCount << endl;

    // The song was played once
    playCount = 1;

    cout << "Play count: " << playCount << endl;

    // Later, the song has been played many more times
    playCount = 25;

    cout << "Play count: " << playCount << endl;

    return 0;
}
