#include<iostream>   
#include <stdlib.h>  
#include <time.h> 
using namespace std;

double x = rand () / ( double ) RAND_MAX , y = rand () / ( double ) RAND_MAX;

int dartsInCircle = 0;

for(int i = 0; i < n ; ++ i ) {
	double x = rand () / ( double ) RAND_MAX , y = rand () / ( double ) RAND_MAX ;
	if( sqrt ( x * x + y * y ) < 1 ) {
		++ dartsInCircle ;
	}
}


double computePi ( const int){
	srand ( time (0) ) ;
	int dartsInCircle = 0;
	for(int i = 0; i < n ; ++i ) {
		double x = rand () / ( double ) RAND_MAX , y = rand () / ( double ) RAND_MAX ;
		if( sqrt ( x * x + y * y ) < 1 ) {
			++ dartsInCircle ;
		}
	}
	return dartsInCircle / static_cast <double >(n ) * 4;
}

int main(){
	
	return 0;
}

