#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};           // Input array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate array size

    int maximum = INT_MIN;                 // Store maximum element
    // Find the maximum value in the array
    for (int i = 0; i < n; i++) {
        maximum = max(maximum, arr[i]);
    }

    int second_maximum = INT_MIN;          // Store second maximum
    // Find the largest element that is not equal to the maximum
    for (int i = 0; i < n; i++) {
        if (arr[i] != maximum) {
            second_maximum = max(second_maximum, arr[i]);
        }
    }

    cout << second_maximum;                // Output result
    return 0;
}
