#include <iostream>
using namespace std;

int Mult(int n){
	int s=0;
	for (int i=1; i<n; i++){
		if(i%3==0 || i%5==0)
			s+=i;
	}
	return s;
}

int main(){
	cout << Mult(1000) <<endl;
	return 0;
}
