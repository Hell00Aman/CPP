#include<bits/stdc++.h>     // Includes all standard libraries
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};      // Array with 5 integers
    int n = sizeof(arr)/4;      // Number of elements (int = 4 bytes)

    int minimum = INT_MAX;      // Start with largest possible integer

    for(int i = 0; i < n; i++){ // Loop through all array elements
        minimum = min(minimum, arr[i]); // Update minimum if smaller value found
    }

    cout << minimum;            // Print the smallest value in the array
    return 0;
}
