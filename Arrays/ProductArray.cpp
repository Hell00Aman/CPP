#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};      // Array containing 5 integers
    int n = sizeof(arr)/4;      // Calculate number of elements (int = 4 bytes)
    int product = 1;            // Variable to store the product

    for(int i=0; i<n; i++){     // Loop through each element of the array
        product *= arr[i];      // Multiply each element with product
    }

    cout << product;            // Print the final product
    return 0;
}
