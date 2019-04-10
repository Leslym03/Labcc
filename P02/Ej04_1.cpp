#include<iostream>
using namespace std;

int sum ( const int x , const int y ) {
	return x + y ;
}

double sum ( const double x , const double y ) {
	return x + y ;
}

int main(){
	cout<< sum(2,3) << endl;
	cout<< sum(1.3,2.1) << endl;
	//cout<< sum(1.3;2) << endl;
	return 0;
}
