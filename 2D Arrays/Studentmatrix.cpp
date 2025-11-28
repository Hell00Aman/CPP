#include <iostream>
using namespace std;

int main() {

    // 2D array: 4 rows for students, 2 columns for roll number and marks
    int data[4][2];

    cout << "Enter roll number and marks for 4 students:\n";

    // Loop to take input for each student
    for(int i = 0; i < 4; i++) {
        cout << "Student " << i + 1 << " (Roll Marks): ";
        cin >> data[i][0] >> data[i][1];  // Store roll in col 0 and marks in col 1
    }

    // Display stored matrix
    cout << "\nStored Data:\n";
    cout << "Roll\tMarks\n";

    // Loop to print roll numbers and marks
    for(int i = 0; i < 4; i++) {
        cout << data[i][0] << "\t" << data[i][1] << endl;
    }

    return 0;  // End of program
}
