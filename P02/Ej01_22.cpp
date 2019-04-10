#include<iostream>
using namespace std;

int* getRandNumPtr (){
	int x = rand ();
	return &x ;
}

int main () {
	int * randNumPtr = getRandNumPtr () ;
	cout << * randNumPtr ; // ERROR
	return 0;
}

