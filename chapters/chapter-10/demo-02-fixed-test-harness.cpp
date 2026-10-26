// ============================================================
// demo-02-fixed-test-harness.cpp
// Objective: Re-run the same manual test harness after the
// boundary bug is fixed, so every case in the table passes.
// ============================================================

#include <iostream>
#include <string>

using namespace std;

// Classifies a song's play count into a category.
// Fixed: a count of exactly 10 is "Popular", so "New" applies
// only when playCount < 10 (the earlier "<=" kept 10 in "New").
string classifyPlayCount(int playCount) {
    if (playCount < 0) {
        return "Invalid";
    } else if (playCount < 10) {       // Fixed: 10 is the first Popular count
        return "New";
    } else if (playCount < 100) {
        return "Popular";
    } else {
        return "Hit";
    }
}

void runTest(int input, string expected, int& passed, int& failed) {
    string actual = classifyPlayCount(input);
    if (actual == expected) {
        cout << "PASS - classifyPlayCount(" << input << ") = " << actual << endl;
        passed++;
    } else {
        cout << "FAIL - classifyPlayCount(" << input << ") = " << actual
             << " (se esperaba " << expected << ")" << endl;
        failed++;
    }
}

int main() {
    int passed = 0, failed = 0;

    runTest(-5, "Invalid", passed, failed);
    runTest(0, "New", passed, failed);
    runTest(9, "New", passed, failed);
    runTest(10, "Popular", passed, failed);
    runTest(50, "Popular", passed, failed);
    runTest(99, "Popular", passed, failed);
    runTest(100, "Hit", passed, failed);
    runTest(500, "Hit", passed, failed);

    cout << "---" << endl;
    cout << "Pruebas exitosas: " << passed << endl;
    cout << "Pruebas fallidas: " << failed << endl;
    return 0;
}
