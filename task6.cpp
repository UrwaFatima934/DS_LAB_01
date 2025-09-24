#include<iostream>
using namespace std;
	void leaky(){
		int * data = new int[100];
	}
	void fixed(){
		int * data = new int[100];
		delete[] data;
	}
	int main(){
		for (int i = 0; i<10000; ++i){
			leaky();
		}
		cout <<"Leaky loop done (memory wasted). \n ";
		for (int i = 0; i< 10000; ++i){
			fixed();
		}
		cout<< "fixed loop done (no leaks). \n";
		return 0;
	}
	