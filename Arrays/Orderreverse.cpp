#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};               // Original array
    int n = sizeof(arr) / sizeof(arr[0]);      // Array size
    int b[n];                                  // New array for reversed values

    cout << "Reverse of array elements: ";

    // Copy elements from arr into b in reverse order
    for (int i = 0; i < n; i++) {
        b[i] = arr[n - 1 - i];                 // Assign reversed element
        cout << b[i] << " ";                   // Print reversed element
    }

    return 0;                                   // End of program
}
