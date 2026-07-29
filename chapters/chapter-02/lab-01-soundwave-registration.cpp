// ============================================================
// lab-01-soundwave-registration.cpp
// Objective: Complete Lab 01 solution.
//            Request user registration data for SoundWave
//            and display a clean console profile summary.
// ============================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;
    string email;
    string country;
    string favoriteArtist;
    string favoriteSong;
    int numberOfPlaylists;
    bool premiumAccount;

    cout << "========================================" << endl;
    cout << "     SoundWave User Registration" << endl;
    cout << "========================================" << endl;
    cout << endl;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your email: ";
    cin >> email;

    cout << "Enter your country: ";
    cin >> country;

    cout << "Enter your favorite artist: ";
    cin >> favoriteArtist;

    cout << "Enter your favorite song: ";
    cin >> favoriteSong;

    cout << "Enter number of playlists: ";
    cin >> numberOfPlaylists;

    cout << "Premium account? (1 = yes, 0 = no): ";
    cin >> premiumAccount;

    cout << endl;
    cout << "========================================" << endl;
    cout << "          SoundWave Profile" << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Name:                " << name << endl;
    cout << "Age:                 " << age << endl;
    cout << "Email:               " << email << endl;
    cout << "Country:             " << country << endl;
    cout << "Favorite artist:     " << favoriteArtist << endl;
    cout << "Favorite song:       " << favoriteSong << endl;
    cout << "Number of playlists: " << numberOfPlaylists << endl;
    cout << "Premium account:     " << premiumAccount << endl;
    cout << endl;
    cout << "========================================" << endl;
    cout << "   Registration completed successfully" << endl;
    cout << "========================================" << endl;

    return 0;
}
