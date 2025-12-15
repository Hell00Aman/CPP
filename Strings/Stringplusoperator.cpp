#include <iostream>  // For input and output
#include <string>    // For using std::string

int main() {
    // Declare and initialize string variables
    std::string first = "Hello";
    std::string second = "World";

    // Use the + operator to combine two strings
    std::string result = first + " " + second;

    // Display the combined string
    std::cout << "Combined string: " << result << std::endl;

    // Return 0 to indicate successful execution
    return 0;
}
