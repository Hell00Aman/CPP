#include <iostream>    // For input and output
#include <string>      // For using std::string
#include <algorithm>   // For using reverse()

int main() {
    std::string str;

    // Input the string from the user
    std::cout << "Enter a string (length > 5): ";
    std::cin >> str;

    // Reverse substring from position 2 to 5 (1-based indexing)
    // In C++, indexing is 0-based, so positions 2 to 5 become index 1 to 4
    reverse(str.begin() + 1, str.begin() + 5);

    // Display the modified string
    std::cout << "Modified string: " << str << std::endl;

    return 0; // End of program
}
