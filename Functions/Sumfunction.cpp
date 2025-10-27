#include <iostream>          // Include input-output stream library
using namespace std;         // Use standard namespace

// Function to calculate and display sum of two numbers
void sum(int a, int b) {     
    int result = a + b;      // Add the two numbers
    cout << "Sum = " << result << endl;  // Display result
}

// Main function - program execution starts here
int main() {                 
    int num1 = 90, num2 = 56; // Declare and initialize variables
    sum(num1, num2);           // Call function to find sum
    return 0;                  // Exit program
}
