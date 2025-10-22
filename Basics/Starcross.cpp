#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n; // Read the size of the pattern

    for(int i=1; i<=n; i++){        // Loop through rows
        for(int j=1; j<=n; j++){    // Loop through columns
            if(i==j || i+j==n+1){   // Print '*' on diagonals
                cout << "*";
            } else {
                cout << " ";        // Else print space
            }
        }
        cout << endl;               // Move to next row
    }
    return 0;
}
