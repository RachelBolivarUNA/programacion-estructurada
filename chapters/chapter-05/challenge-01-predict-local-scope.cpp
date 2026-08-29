// ============================================================
// challenge-01-predict-local-scope.cpp
// Mini Challenge (Scene 1): predict what this program prints
// before running it, then run it to check your answer.
// ============================================================

#include <iostream>

using namespace std;

void calculateStreamingMinutes() {
    int total = 45;
    cout << "Streaming minutes: " << total << endl;
}

void calculateDownloadMinutes() {
    int total = 12;
    cout << "Download minutes: " << total << endl;
}

int main() {
    calculateStreamingMinutes();
    calculateDownloadMinutes();
    return 0;
}
