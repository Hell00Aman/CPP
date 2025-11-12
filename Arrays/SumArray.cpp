#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5}; // initialize array with 5 elements
    int sum = 0; // variable to store sum

    // loop to add all array elements
    for(int i = 0; i <= 4; i++) {
        sum += arr[i]; // add each element to sum
    }

    cout << sum; // display the total sum
    return 0;
}
