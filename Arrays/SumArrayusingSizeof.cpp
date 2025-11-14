#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};    // Array of 9 integers
    int n = sizeof(arr)/4;           // Find number of elements (4 bytes per int)
    int sum=0;                       // Variable to store sum

    for(int i=0;i<n;i++){            // Loop through all elements
        sum += arr[i];               // Add each element to sum
    }

    cout << sum;                     // Print final sum
    return 0;
}
