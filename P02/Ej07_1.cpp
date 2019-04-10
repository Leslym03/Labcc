#include<iostream>
using namespace std;

int stringLength ( const char * str ) {
	int length = 0;
	while (*( str + length ) != '\0') {
		++ length ;
	}
	return length ;
}

int main(){
	cout << stringLength("Hola");
	return 0;
}
