#include<bits/stdc++.h> // includes all standard C++ libraries
using namespace std;

int main() {
    int m;             // number of rows
    cin >> m;          // take input for rows
    int n;             // number of columns
    cin >> n;          // take input for columns

    // outer loop for rows
    for(int i = 1; i <= m; i++) {
        // inner loop for columns
        for(int j = 1; j <= n; j++) {
            cout << "* "; // print star followed by space
        }
        cout << endl;    // move to next line after each row
    }

    return 0;            // program ends successfully
}
