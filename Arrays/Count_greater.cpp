#include <iostream>     // Header file for input-output
using namespace std;

int main() {
    // Array initialization
    int arr[] = {10, 5, 20, 15, 30, 2};
    
    int n = 6;          // Number of elements in the array
    int x = 18;         // Value to compare with
    int count = 0;      // Variable to count elements greater than x

    // Display message
    cout << "Elements greater than " << x << ": " << endl;

    // Loop through the array
    for (int i = 0; i < n; i++) {
        // Check if current element is greater than x
        if (arr[i] > x) {
            cout << arr[i] << " ";   // Print the element
            count++;                 // Increase the count
        }
    }

    // Print total number of elements greater than x
    cout << "\nTotal count = " << count;

    return 0;   // End of program
}
