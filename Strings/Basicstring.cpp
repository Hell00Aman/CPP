#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    // Ask the user to enter their name
    cout << "Enter your name: ";
    cin >> name;  // Reads a single word

    // Print a greeting message
    cout << "Hello, " << name << "!" << endl;

    return 0;
}
