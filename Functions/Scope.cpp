#include<iostream>
using namespace std;
int main(){
    int i; // variable declared outside the loop
    for(int i=0;i<=5;i++){ // loop variable 'i' (local to loop)
        cout << i << endl; // prints 0 to 5
    }
    cout << i; // prints the 'i' declared outside loop (uninitialized)
}
