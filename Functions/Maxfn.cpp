#include<iostream>     // Header file for input/output stream
using namespace std;   // Use standard namespace

// Function to find the maximum of two numbers
int maxoftwo(int a, int b){
    if(a > b) 
        return a;      // Return 'a' if greater
    else 
        return b;      // Otherwise return 'b'
}

int main(){
    cout << maxoftwo(5, 6);  // Function call and print result
}
