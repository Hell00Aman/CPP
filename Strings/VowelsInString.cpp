#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int count = 0;                 // Stores number of vowels
    for(char c : s) {              // Loop through each character
        c = tolower(c);            // Convert to lowercase
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            count++;               // Increase count if vowel found
    }

    cout << "Total vowels: " << count;
    return 0;
}
