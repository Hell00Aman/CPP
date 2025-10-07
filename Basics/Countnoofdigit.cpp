#include <bits/stdc++.h>   // includes all standard libraries
using namespace std;

int main() {
    int n;
    cin >> n;              // take number input from user
    int count = 0;         // variable to count digits

    // loop runs until n becomes 0
    while (n != 0) {
        n = n / 10;        // remove last digit
        count++;           // increase digit count
    }

    cout << count;         // print total number of digits
    return 0;              // end program
}
