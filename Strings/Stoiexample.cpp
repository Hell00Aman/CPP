#include <iostream>   // For input and output
#include <string>     // For using std::string

int main() {
    // Declare a string containing numeric characters
    std::string numberStr = "12345";

    // Convert string to integer using stoi()
    int number = stoi(numberStr);

    // Display the converted integer
    std::cout << "String value: " << numberStr << std::endl;
    std::cout << "Integer value: " << number << std::endl;

    return 0; // End of program
}
