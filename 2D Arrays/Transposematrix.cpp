#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;

    // Taking matrix dimensions from the user
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    // Declaring matrix
    vector<vector<int>> mat(rows, vector<int>(cols));

    // Input matrix elements
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }

    // Printing transpose of the matrix
    cout << "Transpose of the matrix:\n";
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
