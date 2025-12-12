#include <iostream>  // Includes standard input/output stream library
#include <string>    // Includes the C++ string library

int main() {  
    // Declare and initialize a string variable named 'name'
    std::string name = "Chat";

    // Use push_back() to append characters one by one to the string
    name.push_back('G'); // Appends the character 'G' -> string becomes "ChatG"
    name.push_back('P'); // Appends the character 'P' -> string becomes "ChatGP"
    name.push_back('T'); // Appends the character 'T' -> string becomes "ChatGPT"

    // Print the final updated string to the console
    std::cout << "Resulting string: " << name << std::endl;

    // Return 0 to indicate successful program execution
    return 0;
}
