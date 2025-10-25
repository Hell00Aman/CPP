#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m;  // Input the number of rows for the pattern

    for (int i = 1; i <= m; i++) {
        // Print leading spaces to align the pattern properly
        for (int j = 1; j <= m - i; j++) {
            cout << " ";
        }

        // Print left half of stars
        for (int j = 1; j <= i; j++) {
            cout << "*";  // print a star
        }

        // Print right half of stars (to make it symmetrical)
        for (int j = 1; j <= m - i; j++) {
            cout << "*";
        }

        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
