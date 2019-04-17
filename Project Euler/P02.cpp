#include <iostream>
using namespace std;

int fibonacci(){
	int a,b,s=2;
	a=1;
	b=2;
	while (b<4000000){
		b=a+b;
		a=b-a;
		if (b%2==0){
			s=s+b;
		}
	}
	return s;
}

int main(){
	cout << fibonacci()<<endl;
	return 0;
}



