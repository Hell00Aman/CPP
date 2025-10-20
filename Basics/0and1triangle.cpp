#include<bits/stdc++.h>  // Includes all standard libraries
using namespace std;

int main() {
    int m;
    cin >> m;  // Input number of rows

    // Outer loop for rows
    for(int i = 1; i <= m; i++) {
        // Inner loop for columns
        for(int j = 1; j <= i; j++) {
            // Print 1 if (i + j) is even, else print 0
            if((i + j) % 2 == 0)
                cout << "1";
            else
                cout << "0";
        }
        cout << endl;  // Move to next line after each row
    }

    return 0;
}
