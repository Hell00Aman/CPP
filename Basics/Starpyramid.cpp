#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m;  // Input number of rows for the pyramid pattern

    for (int i = 1; i <= m; i++) {
        // Print spaces before stars to create right alignment
        for (int j = 1; j <= m - i; j++) {
            cout << " ";
        }

        // Print stars with spaces between them
        for (int j = 1; j <= i; j++) {
            cout << "*"; // print a star
            if (j < i) { // add space between stars except the last one
                cout << " ";
            }
        }

        cout << endl; // Move to next line after completing a row
    }

    return 0;
}
