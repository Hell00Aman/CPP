#include <iostream>
#include <cmath>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};  // Input array
    int n = 6;                       // Size of array
    int even_sum = 0;                // Sum of elements at even indices
    int odd_sum = 0;                 // Sum of elements at odd indices

    // Loop through array and separate sums based on index parity
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {            // Even index
            even_sum += arr[i];
        } else {                     // Odd index
            odd_sum += arr[i];
        }
    }

    int difference = even_sum - odd_sum; // Calculate difference
    std::cout << "Difference (Even Sum - Odd Sum): " << difference << std::endl;
    return 0;
}
