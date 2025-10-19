#include<bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;

int main() {
    int m; 
    cin >> m;  // Input the number of rows

    // Outer loop controls the row number
    for(int i = 1; i <= m; i++) {
        // Inner loop prints decreasing numbers of digits
        for(int j = 1; j <= m + 1 - i; j++) {
            cout << i;  // Print the current row number
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
