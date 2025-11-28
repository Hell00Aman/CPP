#include <iostream>
using namespace std;

int main() {

    int matrix[5][5];   // 5 rows and 5 columns

    // Fill the matrix with value 10
    for (int i = 0; i < 5; i++) {          // Loop through rows
        for (int j = 0; j < 5; j++) {      // Loop through columns
            matrix[i][j] = 10;             // Store 10 at each position
        }
    }

    // Display the filled matrix
    cout << "Matrix filled with 10:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrix[i][j] << " ";   // Print each element
        }
        cout << endl;                       // New line for each row
    }

    return 0;   // End of program
}
