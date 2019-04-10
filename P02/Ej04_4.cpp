#include<iostream>
using namespace std;

int sum( const int a, const int b, const int c = 0 , const int d = 0){
	return a + b + c + d ;
}

int main(){
	cout << sum(1,2) << endl;
	cout << sum(1,2,4) << endl;
	cout << sum(1,2,2,1) << endl;
	return 0;
}
