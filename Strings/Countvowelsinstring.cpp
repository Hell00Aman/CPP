#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    // Input string from user
    cout << "Enter a string: ";
    cin >> s;   // Reads a single word (no spaces)

    int count = 0;

    // Loop through each character and check for vowels
    for (char c : s) {
        c = tolower(c);  // Convert to lowercase for easy comparison
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    // Output the number of vowels
    cout << "Number of vowels: " << count << endl;

    return 0;
}
