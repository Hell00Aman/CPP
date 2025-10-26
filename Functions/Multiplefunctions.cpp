#include<iostream>     // Header file for input/output operations
using namespace std;   // Use standard namespace

void india() {         // Function to print a message about India
    cout << "I am in India " << endl;
}

void usa() {           // Function to print a message about USA
    cout << "I am in usa " << endl;
    india();           // Calls india() from inside usa()
}

int main() {           // Main function — program execution starts here
    usa();             // Calls usa(), which also calls india()
}
