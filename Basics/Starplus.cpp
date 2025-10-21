#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;                 // Read size of the grid
    int mid = n / 2 + 1;      // Middle row/column for the cross

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == mid || j == mid) // Print '*' on middle row or column
                cout << "* ";
            else
                cout << "  ";        // Otherwise print space
        }
        cout << endl;               // Move to next row
    }
    
    return 0;
}
