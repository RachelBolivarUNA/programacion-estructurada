// ============================================================
// demo-03-assert-basics.cpp
// Objective: Introduce <cassert> as a quick, lightweight way to
// check a function's behavior during development.
// ============================================================

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// Classifies a song's play count into a category (already fixed).
string classifyPlayCount(int playCount) {
    if (playCount < 0) {
        return "Invalid";
    } else if (playCount < 10) {
        return "New";
    } else if (playCount < 100) {
        return "Popular";
    } else {
        return "Hit";
    }
}

int main() {
    assert(classifyPlayCount(-5) == "Invalid");
    assert(classifyPlayCount(0) == "New");
    assert(classifyPlayCount(10) == "Popular");
    assert(classifyPlayCount(100) == "Hit");

    cout << "Todas las aserciones pasaron." << endl;

    // If an assertion were false, the program would stop at once
    // with a message like this one (verified):
    //   demo: demo-03-assert-basics.cpp:14: int main():
    //   Assertion `classifyPlayCount(10) == "New"' failed.
    //   Aborted

    return 0;
}
