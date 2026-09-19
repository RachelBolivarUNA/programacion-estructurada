// ============================================================
// lab-01-playlist-stats.cpp
// Group lab (reference solution): compute SoundWave playlist
// statistics using one function per operation. main() only
// orchestrates the calls — no keyboard input required.
// ============================================================

#include <iostream>

using namespace std;

int computeTotal(int durations[], int size) {
  int total = 0;
  for (int i = 0; i < size; i++) {
    total = total + durations[i];
  }
  return total;
}

double computeAverage(int durations[], int size) {
  return static_cast<double>(computeTotal(durations, size)) / size;
}

int findLongest(int durations[], int size) {
  int longest = durations[0];
  for (int i = 1; i < size; i++) {
    if (durations[i] > longest) {
      longest = durations[i];
    }
  }
  return longest;
}

int findShortest(int durations[], int size) {
  int shortest = durations[0];
  for (int i = 1; i < size; i++) {
    if (durations[i] < shortest) {
      shortest = durations[i];
    }
  }
  return shortest;
}

int searchByDuration(int durations[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (durations[i] == target) {
      return i;
    }
  }
  return -1;
}

int main() {
  cout << "=== SoundWave Lab: Playlist Stats ===" << endl;
  cout << endl;

  const int SIZE = 5;
  int trackDurations[SIZE] = {180, 220, 95, 310, 150};

  cout << "Playlist durations (seconds):" << endl;
  for (int i = 0; i < SIZE; i++) {
    cout << "  Track " << i << ": " << trackDurations[i] << "s" << endl;
  }
  cout << endl;

  int total = computeTotal(trackDurations, SIZE);
  double average = computeAverage(trackDurations, SIZE);
  int longest = findLongest(trackDurations, SIZE);
  int shortest = findShortest(trackDurations, SIZE);

  cout << "Total duration: " << total << "s" << endl;
  cout << "Average duration: " << average << "s" << endl;
  cout << "Longest track: " << longest << "s" << endl;
  cout << "Shortest track: " << shortest << "s" << endl;
  cout << endl;

  int target = 220;
  int index = searchByDuration(trackDurations, SIZE, target);
  if (index != -1) {
    cout << "Search for " << target << "s: found at index " << index << endl;
  } else {
    cout << "Search for " << target << "s: not found" << endl;
  }

  return 0;
}
