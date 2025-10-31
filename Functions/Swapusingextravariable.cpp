#include<iostream>
using namespace std;

int main() {
    int x = 5;      // initialize x with 5
    int y = 6;      // initialize y with 6
    cout << x << " " << y << endl;  // print original values

    int temp = x;   // store x in temp
    x = y;          // assign y’s value to x
    y = temp;       // assign temp’s value (old x) to y

    cout << x << " " << y << endl;  // print swapped values
    return 0;       // end program
}
