#include<iostream>
#include<cstdlib>  // Contiene funciones matematicas

int difference (const int x , const int y) {
	return abs(x-y);
}

int main () {
	std :: cout << difference (24 , 1238) ;
	return 0;
}
