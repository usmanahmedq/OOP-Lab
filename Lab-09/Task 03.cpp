#include <iostream>
#include <string>
using namespace std;

template <typename T>
void printArray(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <typename T>
T findMax(T arr[], int n) {
    T largest = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

template <typename T>
int countValue(T arr[], int n, T value) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            total = total + 1;
        }
    }
    return total;
}

template <typename T>
int search(T arr[], int n, T value) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int a[5] = {4, 9, 2, 9, 7};
    printArray(a, 5);
    int maxA = findMax(a, 5);
    cout << "Max: " << maxA << ", count of " << maxA << ": " << countValue(a, 5, maxA) << endl;

    double b[3] = {31.5, 28, 35.2};
    printArray(b, 3);
    cout << "Max: " << findMax(b, 3) << endl;

    string c[4] = {"Ali", "Sara", "Zain", "Sara"};
    printArray(c, 4);
    cout << "Max: " << findMax(c, 4) << ", Sara found at index " << search(c, 4, string("Sara")) << endl;

    char d[5] = {'B', 'A', 'C', 'A', 'A'};
    printArray(d, 5);
    cout << "Count of A: " << countValue(d, 5, 'A') << ", D found at index " << search(d, 5, 'D') << endl;

    return 0;
}
