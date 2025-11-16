#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};         // Array of 5 elements
    int n = sizeof(arr)/4;         // Calculate number of elements (int = 4 bytes)
    int maximum = arr[0];          // Start with first element as maximum

    for(int i = 0; i < n; i++){    // Loop through the array
        maximum = max(maximum,arr[i]); // Update maximum if a bigger value is found
    }

    cout << maximum;               // Print the largest element
    return 0;
}
