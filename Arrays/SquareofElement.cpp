#include <iostream>
using namespace std;

int main() {
    // Input array
    int arr[] = {1, 2, 3, 4, 5};
    // Calculate size
    int n = sizeof(arr) / sizeof(arr[0]);
    // Output array for squares
    int square[n]; 

    // Calculate squares by iterating through the input array
    for (int i = 0; i < n; i++) {
        square[i] = arr[i] * arr[i]; // Square the element
    }

    // Print results
    cout << "Squares of array elements: ";
    for (int i = 0; i < n; i++) {
        cout << square[i] << " "; // Print squared element
    }

    return 0; // Success
}
