#include <iostream>
#include <vector>
using namespace std;

// Function to find the maximum element in a 2D matrix
int findMaxElement(const vector<vector<int>>& matrix) {
    int maxElement = matrix[0][0];  // Initialize maxElement with the first element
    
    // Traverse through each element of the matrix
    for (const auto& row : matrix) {
        for (int val : row) {
            if (val > maxElement) {
                maxElement = val;  // Update maxElement if current value is greater
            }
        }
    }
    return maxElement;
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    int maxVal = findMaxElement(matrix);
    cout << "Maximum element in the matrix is: " << maxVal << endl;

    return 0;
}
