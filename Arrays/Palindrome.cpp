#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;                          // Read array size
    std::vector<int> arr(n);                // Create vector of size n

    // Input array elements
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    bool isPalindrome = true;               // Flag to track palindrome status

    // Check if array reads same from both ends
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {     // Compare opposite elements
            isPalindrome = false;
            break;
        }
    }

    // Output result
    if (isPalindrome) {
        std::cout << "Palindrome" << std::endl;
    } else {
        std::cout << "Not Palindrome" << std::endl;
    }

    return 0;
}
