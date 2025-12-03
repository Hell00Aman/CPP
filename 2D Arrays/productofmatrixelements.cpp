#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;

    // Ask user for matrix dimensions
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    // Create matrix using vector
    vector<vector<long long>> matrix(rows, vector<long long>(cols));

    // Read matrix elements
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    long long product = 1;

    // Compute the product of all elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            product *= matrix[i][j];
        }
    }

    // Display the result
    cout << "Product of all elements: " << product << endl;

    return 0;
}
