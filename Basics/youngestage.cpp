#include <bits/stdc++.h>   // include all standard libraries
using namespace std;

int main() {
    int Ram, Shyam, Ajay;

    // input ages of all three
    cout << "Enter Ram's age: ";
    cin >> Ram;
    cout << "Enter Shyam's age: ";
    cin >> Shyam;
    cout << "Enter Ajay's age: ";
    cin >> Ajay;

    // check if Ram is younger than Shyam
    if (Ram < Shyam) {
        // compare Ram with Ajay
        if (Ram < Ajay) {
            cout << "Ram is youngest: ";
        } else {
            cout << "Ajay is youngest: ";
        }
    } 
    else {
        // if Shyam is younger than Ram, compare Shyam with Ajay
        if (Shyam < Ajay) {
            cout << "Shyam is youngest: ";
        } else {
            cout << "Ajay is youngest: ";
        }
    }

    return 0; // end of program
}
