#include<bits/stdc++.h>
using namespace std;

int main(){
    int m;
    cin >> m; // Input number of rows

    for(int i = 1; i <= m; i++){ // Loop for rows
        for(int j = 1; j <= i; j++){ // Loop for columns
            if(i % 2 != 0){ 
                cout << j; // Print numbers for odd rows
            } else {
                cout << (char)(j + 64); // Print letters for even rows
            }
        }
        cout << endl; // Move to next line after each row
    }

    return 0;
}
