#include<bits/stdc++.h> // includes all standard libraries
using namespace std;

int main() {
    int n; 
    cin >> n; // take number as input
    int sum = 0; 
    int lastdigit;

    // loop until number becomes 0
    while(n != 0) {
        lastdigit = n % 10;  // extract last digit
        n = n / 10;           // remove last digit

        // check if digit is even
        if(lastdigit % 2 == 0) {
            sum += lastdigit; // add even digits
        }
    }

    cout << sum; // print sum of even digits
    return 0;
}
