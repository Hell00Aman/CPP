#include<bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;

int main() {
    int m;
    cin >> m;  // Input number of rows

    int a = 1;  // Initialize number to start printing from 1

    // Outer loop for rows
    for(int i = 1; i <= m; i++) {
        // Inner loop for printing numbers in each row
        for(int j = 1; j <= i; j++) {
            cout << a;  // Print current number
            a++;        // Increment number for next print
        }
        cout << endl;  // Move to next line after each row
    }

    return 0;
}
