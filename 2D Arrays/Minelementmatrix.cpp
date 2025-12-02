#include <iostream>
#include <vector>
#include <climits>  // For INT_MAX
using namespace std;

// Function to find the minimum element in a 2D matrix
int findMinElement(const vector<vector<int>>& matrix) {
    int minElement = INT_MAX;  // Initialize with highest possible int value

    // Loop through each row of the matrix
    for (const auto& row : matrix) {
        // Loop through each element in current row
        for (int val : row) {
            // Update minimum when a smaller value is found
            if (val < minElement) {
                minElement = val;
            }
        }
    }
    return minElement;  // Return smallest element found
}

int main() {
    int rows, cols;

    // Input number of rows and columns
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    // Create 2D matrix with given dimensions
    vector<vector<int>> matrix(rows, vector<int>(cols));

    // Input matrix elements
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Find and display the minimum element
    int minVal = findMinElement(matrix);
    cout << "Minimum element in the matrix is: " << minVal << endl;

    return 0;
}
