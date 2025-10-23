#include <bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin >> m; // read number of rows
    for(int i=1;i<=m;i++){
        // print (m-i) spaces before stars for right alignment
        for(int j=1;j<=m-i;j++) cout<<" ";
        // print i stars to form the pyramid
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl; // move to next row
    }
    return 0; // end of program
}
