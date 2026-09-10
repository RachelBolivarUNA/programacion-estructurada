// ============================================================
// demo-04-array-as-parameter.cpp
// Objective: Refactor array operations into functions that
// receive the array and its size as parameters.
//
// Important: when you pass an array to a function, it behaves
// as if it were passed by reference — the function can modify
// the original array even without using &. That is why we also
// pass size separately: inside the function, sizeof(arr) does
// not give the full array length the way it would in main().
// ============================================================

#include <iostream>

using namespace std;

int computeTotal(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total = total + arr[i];
    }
    return total;
}

double computeAverage(int arr[], int size) {
    // Cast to double so we do not lose the fractional part
    return static_cast<double>(computeTotal(arr, size)) / size;
}

int findMax(int arr[], int size) {
    int maxValue = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    return maxValue;
}

int findMin(int arr[], int size) {
    int minValue = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
    }
    return minValue;
}

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// Because arrays are passed "like by reference", this update
// changes the caller's original array.
void updateElement(int arr[], int size, int index, int newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
    }
}

int main() {
    cout << "=== SoundWave Demo 04: Arrays as Parameters ===" << endl;
    cout << endl;

    const int SIZE = 5;
    int trackDurations[SIZE] = {180, 220, 95, 310, 150};

    cout << "Total: " << computeTotal(trackDurations, SIZE) << "s" << endl;
    cout << "Average: " << computeAverage(trackDurations, SIZE) << "s" << endl;
    cout << "Longest: " << findMax(trackDurations, SIZE) << "s" << endl;
    cout << "Shortest: " << findMin(trackDurations, SIZE) << "s" << endl;

    int target = 95;
    int index = linearSearch(trackDurations, SIZE, target);
    cout << "Search for " << target << "s -> index " << index << endl;

    cout << endl;
    cout << "Before update, index 1 = " << trackDurations[1] << "s" << endl;
    updateElement(trackDurations, SIZE, 1, 240);
    cout << "After update, index 1 = " << trackDurations[1] << "s" << endl;
    cout << "(Proof that the function modified the original array.)" << endl;

    return 0;
}
