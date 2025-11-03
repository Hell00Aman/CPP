#include<iostream>
using namespace std;

void greet() {
    cout << "Hey World" << endl; // Print a greeting message
    greet();                     // Recursive call to greet() with no stop condition
}

int main() {
    greet();                     // Call the greet() function
    return 0;                    // End of program
}
