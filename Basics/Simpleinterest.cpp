#include<bits/stdc++.h>   // Includes all standard libraries
using namespace std;      // Use standard namespace

int main(){
    float P;              // Principal amount
    float R;              // Rate of interest
    float T;              // Time period
    float SI;             // Simple Interest

    cin >> P;             // Input principal
    cin >> R;             // Input rate
    cin >> T;             // Input time

    SI = (P * R * T) / 100; // Calculate SI using formula

    cout << SI;           // Print result
    return 0;             // Exit program successfully
}
