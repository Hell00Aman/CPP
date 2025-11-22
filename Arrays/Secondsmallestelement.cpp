#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};              // Input array
    int n = sizeof(arr) / sizeof(arr[0]);     // Array size

    int minimum = INT_MAX;                    // Store minimum value
    // Find the minimum element in the array
    for (int i = 0; i < n; i++) {
        minimum = min(minimum, arr[i]);
    }

    int second_minimum = INT_MAX;             // Store second minimum
    // Find the smallest element that is not equal to the minimum
    for (int i = 0; i < n; i++) {
        if (arr[i] != minimum) {
            second_minimum = min(second_minimum, arr[i]);
        }
    }

    cout << second_minimum;                   // Output result
    return 0;
}
