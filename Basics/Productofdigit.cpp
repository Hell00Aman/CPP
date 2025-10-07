#include <bits/stdc++.h> // include all standard libraries
using namespace std;

int main() {
    int n;
    cin >> n;              // take number input from user
    int product = 1;       // initialize product as 1
    int lastdigit;         // to store each digit

    while (n != 0) {       // loop till number becomes 0
        lastdigit = n % 10; // extract last digit
        n = n / 10;         // remove last digit
        product *= lastdigit; // multiply with product
    }

    cout << product;       // print final product
}
