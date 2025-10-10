#include <iostream> // include standard input-output library
using namespace std;

int main() {
    int x = 65; // ASCII value of 'A'

    cout << "Uppercase Alphabets with ASCII values:\n";

    // loop through ASCII values from 65 ('A') to 90 ('Z')
    while (x <= 90) {
        cout << x << " = " << char(x) << endl; // print ASCII value and its character
        x++; // move to the next ASCII value
    }

    return 0; // end of program
}
