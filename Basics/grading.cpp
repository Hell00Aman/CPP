#include <bits/stdc++.h>   // include all standard libraries
using namespace std;

int main() {
    int student, marks;  

    // ask user to enter number of students
    cout << "Enter the number of students: ";
    cin >> student;

    // ask user to enter marks of a student
    cout << "Enter the marks: ";
    cin >> marks;

    // check grade according to marks range
    if (marks >= 81 && marks <= 100) {          // if marks between 81 and 100
        cout << "Grade is : Very Good";
    }
    else if (marks >= 61) {                     // if marks between 61 and 80
        cout << "Grade is : Good";
    }
    else if (marks >= 41) {                     // if marks between 41 and 60
        cout << "Grade is : Average";
    }
    else {                                      // if marks less than 41
        cout << "Grade is : Fail";
    }

    return 0;   // end of program
}
