#include <bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin >> m; // input number of rows
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m-i;j++) cout<<" "; // print spaces
        for(int j=1;j<=i;j++) cout<<j; // print numbers from 1 to i
        cout<<endl; // next line
    }
    return 0;
}
