#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};              // Input array
    int n = sizeof(arr) / sizeof(arr[0]);     // Calculate array size

    int start = 0;                            // Pointer to beginning
    int end = n - 1;                          // Pointer to end

    // Reverse array using two-pointer method
    while (start < end) {
        swap(arr[start], arr[end]);           // Swap elements
        start++;                              
        end--;                                
    }

    cout << "Reversed array: ";
    // Print reversed array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
