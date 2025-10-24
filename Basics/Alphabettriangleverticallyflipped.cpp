#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m;  // Input number of rows for the pyramid

    for (int i = 1; i <= m; i++) {
        // Print leading spaces to align pattern properly
        for (int j = 1; j <= m - i; j++) {
            cout << " ";
        }

        // Print letters starting from 'A' (ASCII 65)
        for (int j = 1; j <= i; j++) {
            cout << (char)(j + 64); // Convert number to alphabet (1 -> A, 2 -> B, etc.)
        }

        cout << endl; // Move to next line after each row
    }

    return 0;
}
