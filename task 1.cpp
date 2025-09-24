#include<iostream>
using namespace std;
int main(){
     int x = 42; // create the varabile with x
     int * p = &x; // storing a p pointer wuth address x
     int ** q = &p; // q is a pointer to pointer, starting the address of p
     // print value step by step
     cout<< "x:" <<x <<"\n"; // print 42
     cout<< "*p:" <<*p << "\n"; // *p = value at address of x 42
     cout<< "**q:" <<**q << "\n"; // **q = value at address of p is 42
     **q = 100;  // change x value via q
     cout<< "After **q=100, x:" << x << "\n";   // print 100
     return 0; // program successfully end
}