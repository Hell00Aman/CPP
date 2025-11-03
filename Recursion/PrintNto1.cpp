#include<iostream>
using namespace std;

void print(int n) {
    if(n == 0) return;    // Base case: stop recursion when n becomes 0
    cout << n << endl;    // Print the current value of n
    print(n - 1);         // Recursive call with n decreased by 1
}

int main() {
    print(6);             // Start recursion by calling print() with 6
    return 0;             // End of program
}
