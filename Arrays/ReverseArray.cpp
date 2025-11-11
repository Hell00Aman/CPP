#include<iostream>     // Header file for input/output
using namespace std;   // To use standard names without std::

int main() {
    int arr[5] = {1, 23, 44, 4, 6};  // Declare and initialize an array of 5 integers
    
    // Loop to print array elements in reverse order
    for(int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";       // Print each element followed by a space
    }

    return 0;  // End of program
}
