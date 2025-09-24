#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" how many scores?"; //ask user for number of scores
    cin >> n; // input n from keyboard
    // create an array of integers at runtime using 'new'
    int* scores = new int[n];
    // input the scores
    cout<< " Enter "<< n<< "scores: \n";
    for (int i = 0; i<n; ++i){
        cin>> scores[i];
    }
    long long sum = 0;
    for (int i = 0; i<n; ++i){
        sum += scores[i];
    }
    cout<<" Average =" << (double)sum /n << "\n";
    delete[] scores;
    scores = nullptr;
    return 0;
}