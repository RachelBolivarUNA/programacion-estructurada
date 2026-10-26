// ============================================================
// demo-01-manual-test-harness.cpp
// Objective: Show how a manual test harness (PASS/FAIL) can
// reveal a real boundary bug in a function, by running it
// against a table of test cases designed BEFORE reading the code.
// ============================================================

#include <iostream>
#include <string>

using namespace std;

// Classifies a song's play count into a category.
// NOTE: this version has a deliberate boundary bug — watch what
// happens when we run it against our test cases.
string classifyPlayCount(int playCount) {
    if (playCount < 0) {
        return "Invalid";
    } else if (playCount <= 10) {      // BUG: should be playCount < 10
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
