#include <iostream>
using namespace std;

int main() {
    // Declare a 2D array with 3 rows and 4 columns
    int arr[3][4];

    // ----- Input section -----
    cout << "Enter 12 integers for a 3x4 matrix:\n";

    // Loop through rows
    for(int i = 0; i < 3; i++) {
        // Loop through columns
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];  // Take input for each element
        }
    }

    // ----- Output section -----
    cout << "\nThe 2D Array (Matrix) is:\n";

    // Print the 2D array
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";  // Print each element
        }
        cout << endl;  // New line after each row
    }

    return 0;
}
