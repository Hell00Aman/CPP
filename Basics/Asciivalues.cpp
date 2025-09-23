#include<bits/stdc++.h>   // Includes all standard C++ libraries
using namespace std;      // Use the standard namespace

int main(){
    char x, y;            // Declare two char variables to store input
    cin >> x >> y;        // Read two characters from user input
    cout << (int)x << endl  // Print ASCII value of first character (typecast to int)
         << (float)y;        // Print ASCII value of second character as float (typecast to float)
    return 0;             // Exit program successfully
}
