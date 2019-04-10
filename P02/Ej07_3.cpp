#include<iostream>
using namespace std;

void swap (int *x , int * y ) {
	int tmp = * x ;
	* x = * y ;
	* y = tmp ;
}

int main(){
	int a = 1, b = 5;
	swap(a,b);
	cout << a << " " << b ;
	return 0;
}
