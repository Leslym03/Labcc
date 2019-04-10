#include<iostream>
using namespace std;

int sum ( const int x , const int y , const int z ) {
	return x + y + z ;
}
int sum ( const int a , const int b , const int c , const int d ) {
	return a + b + c + d ;
}

int main(){
	cout << sum(2,4,2) << endl;
	cout << sum(1,3,2,3) << endl;
	return 0;
}
