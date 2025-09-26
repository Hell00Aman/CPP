#include <bits/stdc++.h> // include all standard libraries
using namespace std;

int main() {
    int cp, sp;             // cp = cost price, sp = selling price
    
    cin >> cp >> sp;        // take input for cost price and selling price

    if (sp > cp) {          // case: selling price greater than cost price
        cout << "profit" << endl << sp - cp;
    }
    else if (sp == cp) {    // case: no profit, no loss
        cout << "no profit no loss";
    }
    else {                  // case: selling price less than cost price
        cout << "loss" << endl << cp - sp;
    }

    return 0;               // end program
}
