#include<iostream>
using namespace std;

int main() {
    int arr[5]; // Declare an integer array of size 5

    // Input elements into the array
    for(int i = 0; i <= 4; i++) {
        cin >> arr[i];
    }

    // Display the original array elements
    for(int i = 0; i <= 4; i++) {
        cout << arr[i] << " ";
    }

    arr[0] = 10; // Update the first element to 10
    cout << endl;

    // Display the updated array
    for(int i = 0; i <= 4; i++) {
        cout << arr[i] << " ";
    }

    return 0; // End of program
}
