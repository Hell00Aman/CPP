#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m; // Input number of rows

    // Outer loop controls the number of rows
    for (int i = 1; i <= m; i++) {
        // Inner loop prints numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl; // Move to next line after each row
    }

    return 0;
}
