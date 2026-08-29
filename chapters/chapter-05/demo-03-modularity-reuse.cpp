// ============================================================
// demo-03-modularity-reuse.cpp
// Objective: Show how extracting a repeated block of code into
// its own function removes duplication, so both call sites use
// a single source of truth.
// ============================================================

#include <iostream>

using namespace std;

void printPlaylist() {
    cout << "1. Skyline Drive" << endl;
    cout << "2. Night Static" << endl;
    cout << "3. Paper Moon" << endl;
}

void showMenu() {
    cout << "Main menu:" << endl;
    printPlaylist();
}

void showSearchResults() {
    cout << "Search results:" << endl;
    printPlaylist();
}

int main() {
    showMenu();
    showSearchResults();
    return 0;
}
