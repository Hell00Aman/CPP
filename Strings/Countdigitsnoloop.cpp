#include <iostream>   // For input and output
#include <string>     // For using std::string and to_string()

int main() {
    int number;

    // Take integer input from the user
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Convert the number to string
    std::string numStr = std::to_string(number);

    // Length of the string gives total number of digits
    int digitCount = numStr.length();

    // Display the result
    std::cout << "Total number of digits: " << digitCount << std::endl;

    return 0; // End of program
}
