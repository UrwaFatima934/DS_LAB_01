#include<iostream>
using namespace std;
int main(){
    int a = 20;  // create a varbile a with value 20
    int * p = &a; // pointer p stores address of a
    cout <<" a before:" << a << "\n"; // print 20
    *p = *p + 5; // deference p change a's value to 25 
    cout<< " a after:" << a << "\n"; //print 25
    return 0; // program end
}