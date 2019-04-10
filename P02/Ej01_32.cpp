#include<iostream>
using namespace std;

int main(){
	const int ARRAY_LEN = 100;
	int arr [ ARRAY_LEN ];
	int * p = arr ;
	arr [0] = 1;
	int * q = & arr [0];
	
	int * z = & arr [10];
	
	cout << arr [ ARRAY_LEN ] << endl;
	cout << *p << endl;
	cout << *q << endl;
	
	
	return 0;
}




