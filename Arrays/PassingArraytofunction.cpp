#include<iostream>
using namespace std;

// Function to change the first element of the array
void change(int arr[]) {
    arr[0] = 9; // modify first element
}

int main() {
    int arr[5] = {1,2,3,4,5}; // initialize array
    // Print original array
    for(int i=0; i<=4; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    change(arr); // pass array to function
    
    // Print modified array
    for(int i=0; i<=4; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
