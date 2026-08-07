// ============================================================
// challenge-02-premium-playback.cpp
// Mini Challenge (Scene 2): decide if a user can play a song.
// A user can play it if they are Premium, OR if they are on the
// free plan and haven't reached their daily play limit yet.
// ============================================================

#include <iostream>

using namespace std;

int main() {
    bool isPremium;
    int playsToday;
    const int FREE_DAILY_LIMIT = 10;

    cout << "Is the user Premium? (1 = yes, 0 = no): ";
    cin >> isPremium;

    cout << "Plays today: ";
    cin >> playsToday;

    if (isPremium || playsToday < FREE_DAILY_LIMIT) {
        cout << "You can play this song." << endl;
    } else {
        cout << "Daily limit reached. Upgrade to Premium to keep listening." << endl;
    }

    return 0;
}
