#include<bits/stdc++.h>  // Includes all standard libraries
using namespace std;

int main() {
    int m;
    cin >> m;  // Input number of rows

    // Outer loop controls the number of rows
    for(int i = 1; i <= m; i++) {
        // Inner loop prints the first i odd numbers
        for(int j = 1; j <= i; j++) {
            cout << 2 * j - 1;  // Formula to generate odd numbers
        }
        cout << endl;  // Move to next line after each row
    }

    return 0;
}
