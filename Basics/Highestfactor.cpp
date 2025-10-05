#include <bits/stdc++.h>   // include all standard libraries
using namespace std;

int main() {
    int n;
    cin >> n;              // take input from user

    // loop starts from n-1 and goes down to 1
    for (int i = n - 1; i >= 1; i--) {
        // check if i divides n completely
        if (n % i == 0) {
            cout << i << endl;  // print the first divisor found
            break;              // stop the loop after finding it
        }
    }

    return 0; // end of program
}
