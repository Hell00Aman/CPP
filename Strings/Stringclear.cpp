#include <iostream>  // For input and output operations
#include <string>    // For using the std::string class

int main() {
    // Declare and initialize a string variable
    std::string message = "Hello World";

    // Clear all characters from the string
    message.clear(); // String becomes empty ""

    // Check and display whether the string is empty
    if (message.empty()) {
        std::cout << "The string is now empty." << std::endl;
    }

    // Return 0 to indicate successful program execution
    return 0;
}
