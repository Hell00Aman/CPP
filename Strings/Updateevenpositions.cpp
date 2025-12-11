#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);   // Input full string

    for(int i = 0; i < s.length(); i++) {
        if(i % 2 == 0) {   // Check if index is even
            s[i] = 'a';    // Replace even-position character
        }
    }

    cout << "Updated string: " << s;
    return 0;
}
