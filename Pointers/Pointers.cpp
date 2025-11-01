#include <iostream>     // Include input-output stream library
using namespace std;

int main() {
    int x = 3;          // Declare integer variable 'x' and assign value 3
    int* p;             // Declare an integer pointer 'p'
    p = &x;             // Store the address of 'x' in pointer 'p'
    cout << &x << endl; // Print the memory address of 'x'
    cout << p << endl;  // Print the address stored in 'p' (same as &x)
    return 0;           // End of program
}
