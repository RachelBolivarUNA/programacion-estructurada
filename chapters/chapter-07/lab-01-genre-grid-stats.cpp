// ============================================================
// lab-01-genre-grid-stats.cpp
// Group lab reference solution (3-4 students).
// SoundWave plays by day and genre. No keyboard input.
// Each statistic lives in its own function. main() only calls
// them and prints the results.
//
// Rows:    0 Monday ... 6 Sunday
// Columns: 0 Pop, 1 Rock, 2 Jazz, 3 Electronic
// The [4] in every parameter is the column count. It has to
// stay fixed. The number of days is the rows argument.
// ============================================================

#include <iostream>
#include <string>

using namespace std;

const int ROWS = 7;
const int COLS = 4;

int sumDay(int plays[][4], int day) {
  int total = 0;
  for (int genre = 0; genre < COLS; genre++) {
    total = total + plays[day][genre];
  }
  return total;
}

int sumGenre(int plays[][4], int rows, int genre) {
  int total = 0;
  for (int day = 0; day < rows; day++) {
    total = total + plays[day][genre];
  }
  return total;
}

int computeWeeklyTotal(int plays[][4], int rows) {
  int total = 0;
  for (int day = 0; day < rows; day++) {
    total = total + sumDay(plays, day);
  }
  return total;
}

void findBusiestCell(int plays[][4], int rows,
                     int &bestRow, int &bestCol, int &bestValue) {
  bestRow = 0;
  bestCol = 0;
  bestValue = plays[0][0];
  for (int row = 0; row < rows; row++) {
    for (int col = 0; col < COLS; col++) {
      if (plays[row][col] > bestValue) {
        bestValue = plays[row][col];
        bestRow = row;
        bestCol = col;
      }
    }
  }
}

// foundRow and foundCol become -1 when target is not in the grid.
void findPlayCount(int plays[][4], int rows, int target,
                   int &foundRow, int &foundCol) {
  foundRow = -1;
  foundCol = -1;
  for (int row = 0; row < rows; row++) {
    for (int col = 0; col < COLS; col++) {
      if (plays[row][col] == target) {
        foundRow = row;
        foundCol = col;
        return;
      }
    }
  }
}

int main() {
  cout << "=== SoundWave Lab: Genre Grid Stats ===" << endl;
  cout << endl;

  string dayNames[ROWS] = {
      "Monday", "Tuesday", "Wednesday", "Thursday",
      "Friday", "Saturday", "Sunday"};
  string genreNames[COLS] = {"Pop", "Rock", "Jazz", "Electronic"};

  int genrePlays[ROWS][COLS] = {
      {120, 85, 40, 95},
      {110, 90, 35, 100},
      {130, 70, 50, 115},
      {125, 80, 45, 105},
      {210, 160, 60, 190},
      {240, 200, 75, 230},
      {180, 150, 55, 170}};

  cout << "Plays by day and genre:" << endl;
  for (int row = 0; row < ROWS; row++) {
    cout << "  " << dayNames[row] << ": ";
    for (int col = 0; col < COLS; col++) {
      cout << genreNames[col] << "=" << genrePlays[row][col] << " ";
    }
    cout << endl;
  }
  cout << endl;

  int weeklyTotal = computeWeeklyTotal(genrePlays, ROWS);
  cout << "Weekly total: " << weeklyTotal << " plays" << endl;
  cout << endl;

  cout << "Plays per day:" << endl;
  for (int day = 0; day < ROWS; day++) {
    cout << "  " << dayNames[day] << ": " << sumDay(genrePlays, day) << endl;
  }
  cout << endl;

  cout << "Plays per genre:" << endl;
  for (int genre = 0; genre < COLS; genre++) {
    cout << "  " << genreNames[genre] << ": "
         << sumGenre(genrePlays, ROWS, genre) << endl;
  }
  cout << endl;

  int bestRow = 0;
  int bestCol = 0;
  int bestValue = 0;
  findBusiestCell(genrePlays, ROWS, bestRow, bestCol, bestValue);
  cout << "Busiest cell: " << dayNames[bestRow] << " / " << genreNames[bestCol]
       << " = " << bestValue << " plays" << endl;
  cout << endl;

  int target = 160;
  int foundRow = 0;
  int foundCol = 0;
  findPlayCount(genrePlays, ROWS, target, foundRow, foundCol);
  if (foundRow != -1) {
    cout << "Search for " << target << " plays: " << dayNames[foundRow]
         << " / " << genreNames[foundCol] << endl;
  } else {
    cout << "Search for " << target << " plays: not found" << endl;
  }

  int missing = 999;
  findPlayCount(genrePlays, ROWS, missing, foundRow, foundCol);
  if (foundRow != -1) {
    cout << "Search for " << missing << " plays: " << dayNames[foundRow]
         << " / " << genreNames[foundCol] << endl;
  } else {
    cout << "Search for " << missing << " plays: not found" << endl;
  }

  return 0;
}
