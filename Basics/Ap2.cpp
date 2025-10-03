#include <bits/stdc++.h>   // include all standard libraries
using namespace std;

int main() {
    int n;
    cin >> n;              // take input from user

    // loop starts from 4, runs up to (3*n+1), increasing by 3 each time
    for (int i = 4; i <= 3*n + 1; i += 3) {
        cout << i << endl; // print the current value of i
    }

    return 0; // end of program
}

 //  int a=4;
 //for(int i = 1; i<=n; i++){
//         cout << a<< endl;                                                 Method 2 without maths

//        a=a+3;
//     }
