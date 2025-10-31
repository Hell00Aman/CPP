#include<iostream>
using namespace std;
int main(){
int x=5,y=6; //init values
cout<<x<<" "<<y<<endl; //before swap
x=x+y; //sum both
y=x-y; //y becomes old x
x=x-y; //x becomes old y
cout<<x<<" "<<y<<endl; //after swap
return 0; //end
}
