#include <iostream>   // For input and output
#include <string>     // For using std::string

int main() {
    // Declare numeric variables
    int number = 100;
    float pi = 3.14f;

    // Convert numbers to strings using to_string()
    std::string numStr = to_string(number);
    std::string piStr = to_string(pi);

    // Display the converted strings
    std::cout << "Integer as string: " << numStr << std::endl;
    std::cout << "Float as string: " << piStr << std::endl;

    return 0; // End of program
}
