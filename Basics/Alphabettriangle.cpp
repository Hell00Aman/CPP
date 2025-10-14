#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m; // Input number of rows

    // Outer loop controls the number of rows
    for (int i = 1; i <= m; i++) {
        // Inner loop prints alphabets from 'A' onward
        for (int j = 1; j <= i; j++) {
            cout << (char)(j + 64); // Convert number to uppercase letter (A=65)
        }
        cout << endl; // Move to next line after each row
    }

    return 0;
}
