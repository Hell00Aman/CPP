#include <bits/stdc++.h> // include all standard libraries
using namespace std;

int main() {
    int length, breadth, area, parameter;

    // take input for length and breadth of rectangle
    cin >> length >> breadth;

    // calculate area of rectangle
    area = length * breadth;
    cout << area << endl; // print area

    // calculate perimeter of rectangle
    parameter = 2 * (length + breadth);
    cout << parameter << endl; // print perimeter

    // compare area and perimeter
    if (area > parameter) {
        cout << "area is greater" << endl;
    } else {
        cout << "parameter is greater" << endl;
    }

    return 0; // program ends
}
