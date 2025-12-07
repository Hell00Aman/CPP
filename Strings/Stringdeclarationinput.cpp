#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaring a string variable
    string s;

    // Ask the user to enter a string (can include spaces)
    cout << "Enter any text: ";
    getline(cin, s);

    // Display the entered string
    cout << "You entered: " << s << endl;

    return 0;
}
