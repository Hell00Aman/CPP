#include<bits/stdc++.h> // includes all standard C++ libraries
using namespace std;

int main() {
    int n;              // variable to store number of rows and columns
    cin >> n;           // input size of the square

    // outer loop for rows
    for(int i = 1; i <= n; i++) {
        // inner loop for columns
        for(int j = 1; j <= n; j++) {
            cout << "* "; // print star and space
        }
        cout << endl;    // move to next line after each row
    }

    return 0;            // end of program
}
