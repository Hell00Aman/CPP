#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m; // Input number of rows

    // Outer loop controls the number of rows
    for (int i = 1; i <= m; i++) {
        // Inner loop prints numbers in reverse order
        // Starting from m and going down to (m - i + 1)
        for (int j = m; j >= m - i + 1; j--) {
            cout << j;
        }
        if (i != m) cout << endl; // Avoid extra newline after last row
    }

    return 0;
}
