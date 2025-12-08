#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    // Input a word from the user
    cout << "Enter a string: ";
    cin >> s;

    // Print each character with its index
    cout << "Indexed characters:\n";
    for (int i = 0; i < s.length(); i++) {
        cout << "Index " << i << ": " << s[i] << endl;
    }

    return 0;
}
