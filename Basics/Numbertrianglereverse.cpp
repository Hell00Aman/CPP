#include<bits/stdc++.h>   // Includes all standard libraries
using namespace std;     

int main(){
   int m;                // Variable to store number of rows
   cin >> m;             // Input from user

   // Outer loop controls the number of rows
   for(int i = 1; i <= m; i++){
       // Inner loop prints numbers from 1 to (m + 1 - i)
       for(int j = 1; j <= m + 1 - i; j++){
           cout << j;    // Print the number
       }
       cout << endl;     // Move to the next line
   }

   return 0;             // End of program
}
