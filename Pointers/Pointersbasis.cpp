#include<iostream>
using namespace std;

int main() {
    int x = 3;      // Declare an integer variable x and assign it the value 3
    int* p;         // Declare a pointer to an integer
    p = &x;         // Store the address of x in pointer p

    cout << &x << endl; // Print the memory address of x
    cout << p << endl;  // Print the value of p (same as address of x)
    cout << *p << endl; // Print the value stored at the address (value of x)

    return 0;
}
