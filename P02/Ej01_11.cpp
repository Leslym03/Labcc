#include<iostream>
using namespace std;

void printNTimesA ( char * msg , int n ) {
	for ( int i = 0; i < n ; ++ i ) {
	cout << msg ;
	}
}

void printNTimesB ( char * msg , int n = 1) {
	for ( int i = 0; i < n ; ++i ) {
	cout << msg ;
	}
}

void printNTimesC ( char * msg = " \ n", int n = 1) {
	for ( int i = 0; i < n ; ++ i ) {
	cout << msg ;
	}
}
 
int main(){
	//const char * msg = "Hola";
	//printNTimesA( "Hola" , 3);
	//printNTimesB("Hola",1);
	//printNTimesC("Hola" ,1);
	
	return 0;
}
