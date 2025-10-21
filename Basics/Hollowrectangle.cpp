#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;              // Read number of rows (m) and columns (n)

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == m || j == 1 || j == n) // Print '*' on borders
                cout << "*";
            else
                cout << " ";     // Print space inside
        }
        cout << endl;           // Move to next row
    }
    
    return 0;
}
