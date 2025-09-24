#include<iostream>
using namespace std;
int main() {
    // Array of pointers to string literals
    const char* names[] = {"Ali", "Sara", "Azeem", "Noor", "Hamza"};
    // find how many names are in the array 
    int n = sizeof(names) / sizeof(names[0]);
    // print each name
    for (int i=0; i<n; ++i){
        cout<< "names[" << i <<"] -> " << names[i] << "\n";
    }
     
    const char* replacement = "fatima";
    names[2] = replacement;
    cout<< "After change , names[2] ->" <<names[2] <<"\n";
    return 0;
}