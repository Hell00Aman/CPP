#include <iostream>   // For input and output
#include <string>     // For using std::string
#include <algorithm>  // For reverse() function

int main() {
    std::string str;

    // Take string input from the user
    std::cout << "Enter a string of even length: ";
    std::cin >> str;

    int len = str.length();     // Store length of the string
    int mid = len / 2;          // Find the middle index

    // Reverse only the first half of the string
    reverse(str.begin(), str.begin() + mid);

    // Display the modified string
    std::cout << "Modified string: " << str << std::endl;

    return 0; // End of program
}
