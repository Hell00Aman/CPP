#include<iostream>
using namespace std;

int main() {
    int arr[5];  // Declare an array of size 5

    // Input elements into the array
    for(int i = 0; i <= 4; i++) {
        cin >> arr[i];
    }

    // Display the array elements
    for(int i = 0; i <= 4; i++) {
        cout << arr[i] << " ";
    }

    return 0; // End of program
}
