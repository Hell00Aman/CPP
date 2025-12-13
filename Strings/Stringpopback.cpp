#include <iostream>  // For input and output
#include <string>    // For using std::string

int main() {
    // Declare and initialize a string variable
    std::string text = "Programming";

    // Remove the last character from the string
    text.pop_back(); // Removes 'g', string becomes "Programmin"

    // Display the updated string
    std::cout << "Resulting string: " << text << std::endl;

    // Return 0 to indicate successful execution
    return 0;
}
