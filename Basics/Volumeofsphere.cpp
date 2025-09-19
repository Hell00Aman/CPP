#include<bits/stdc++.h>   // Includes all standard libraries
using namespace std;      // Use standard namespace

int main(){
    float radius, volume;               // Declare variables
    cin >> radius;                      // Input radius
    volume = (4.0 / 3.0) * (3.141592 * radius * radius * radius); 
    // Formula for volume of sphere = (4/3)πr³

    cout << volume;                     // Print volume
    return 0;                           // End program
}
