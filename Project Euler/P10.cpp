#include <iostream>
using namespace std;

bool Primo(int x){
	bool p = true;
	for (int i=2; i<x; ++i){
		if (x%i==0){
			p = false;
			break;
		}		
	}
	return p;
}

int sumPrim(unsigned long long n){
	int s=0;
	for (int i=2; i<n; i++){
		if (Primo(i)==1){
			s+=i;
		}
		
	}
	return s;
}

int main(){
	cout << sumPrim(10);
	return 0;
}
