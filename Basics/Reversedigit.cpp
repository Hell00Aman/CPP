#include<bits/stdc++.h> // include all standard libraries
using namespace std;

int main() {
    int n;
    cin >> n; // take number input

    int reverse = 0;
    int lastdigit;

    // loop runs until number becomes 0
    while(n != 0) {
        lastdigit = n % 10;           // extract last digit
        n = n / 10;                   // remove last digit
        reverse = reverse * 10 + lastdigit; // build reversed number
    }

    cout << reverse; // display reversed number
    return 0;
}
