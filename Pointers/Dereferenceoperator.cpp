#include<iostream>
using namespace std;

int main() {
    int x = 3;      // Declare an integer variable x and assign value 3
    int* p;         // Declare a pointer to an integer
    p = &x;         // Store the address of x in pointer p
    *p = 7;         // Change the value at the memory location pointed by p to 7
    cout << x << endl; // Print the updated value of x (which is now 7)
    return 0;
}
