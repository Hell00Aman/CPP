#include <bits/stdc++.h>   // include all standard libraries
using namespace std;

int main() {
    int n;
    cin >> n;              // take a number as input from user

    // loop from 2 to n-1 to check divisibility
    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {  // if n is divisible by i
            cout << "composite" << endl; // n has a factor other than 1 and itself
            break;          // stop checking once one divisor is found
        }
    }

    return 0; // end of program
}

/*  bool flag = true;
    for(int i=2; i<=n-1;i++){
        if(n%i==0 ){
         bool  flag = false;
           break;
        }
    }
         if (n==1) cout << "neither prime nor composite";
         else if (flag==true) cout << "prime";
           else cout << "composite";
       return 0;*/
