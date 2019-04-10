#include<iostream>
using namespace std;

int main(){
	char oddOrEven[]={1,2,3,4,5,6};
	char *nthCharPtr = &oddOrEven[5];
	nthCharPtr -= 2; 
	//nthCharPtr = oddOrEven + 3;
	cout << *nthCharPtr << endl;
	char **pointerPtr = &nthCharPtr;
	cout << pointerPtr << endl;
	cout << **pointerPtr << endl;
	nthCharPtr++; 
	cout << nthCharPtr - oddOrEven << endl;
	return 0;
}
