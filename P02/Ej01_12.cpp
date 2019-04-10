#include<iostream>
using namespace std;

void print (const int n){
	cout << n;
}

void print ( const long &x ) { //Evita la sobrecarga
	cout << x ;
}

int main () {
	long x = 234923592;
	print ( x ); 
	return 0;
}

