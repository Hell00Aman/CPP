#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    // Matrix input
    vector<vector<int>> a(n, vector<int>(m));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int l1, r1, l2, r2;
    cout << "Enter coordinates (l1 r1 l2 r2): ";
    cin >> l1 >> r1 >> l2 >> r2;

    long long sum = 0;

    // Loop through the specified rectangle
    for (int i = l1; i <= l2; i++) {
        for (int j = r1; j <= r2; j++) {
            sum += a[i][j];
        }
    }

    cout << "Sum of the rectangle: " << sum << endl;
    return 0;
}
