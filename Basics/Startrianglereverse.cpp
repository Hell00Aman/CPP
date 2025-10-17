#include <bits/stdc++.h>
using namespace std;
int main() {
    int m;
    cin >> m; // Input the number of rows

    // Outer loop for rows
    for (int i = 1; i <= m; i++) {
        // Inner loop for columns
        // Prints decreasing number of stars in each row
        for (int j = 1; j <= m + 1 - i; j++) {
            cout << "* ";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0; // End of program
}
