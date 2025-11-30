#include <iostream>
using namespace std;

int main() {

    int A[3][3], B[3][3], sum[3][3];

    // Input for first matrix
    cout << "Enter elements of Matrix A (3x3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    // Input for second matrix
    cout << "Enter elements of Matrix B (3x3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }

    // Add both matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = A[i][j] + B[i][j];   // Element-wise addition
        }
    }

    // Display result
    cout << "\nSum of Matrices (A + B):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;  // End of program
}
