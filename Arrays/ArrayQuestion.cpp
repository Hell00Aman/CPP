#include <iostream>

int main() {
    // Initialize array of integers
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Determine number of elements

    // Modify elements: add 10 to even indices, double odd indices
    for (int i = 0; i < n; ++i) {
        if (i % 2 != 0) {
            arr[i] = arr[i] * 2; // Double value at odd index
        } else {
            arr[i] = arr[i] + 10; // Add 10 to value at even index
        }
    }
    
    // Print updated array
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
