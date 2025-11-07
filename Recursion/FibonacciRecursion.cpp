#include<iostream>
using namespace std;

// Function to find nth Fibonacci number using recursion
int fibo(int n) {
    if(n == 1 || n == 2) return 1;   // Base case: first two terms are 1
    return fibo(n - 1) + fibo(n - 2); // Recursive case: sum of previous two terms
}

int main() {
    int n;
    cin >> n;          // Input term number
    cout << fibo(n);   // Output nth Fibonacci number
    return 0;
}
