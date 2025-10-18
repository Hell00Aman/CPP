#include<bits/stdc++.h>
using namespace std;

int main(){
    int m;
    cin >> m;  // Input the number of rows for the pattern
    
    // Outer loop for each row
    for(int i = 1; i <= m; i++){
        // Inner loop prints characters from 'A' onwards
        for(int j = 1; j <= m + 1 - i; j++){
            cout << (char)(j + 64); // Convert integer to corresponding ASCII uppercase letter
        }
        cout << endl; // Move to next row after each line
    }
    
    return 0;
}
