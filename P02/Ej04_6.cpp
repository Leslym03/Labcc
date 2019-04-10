#include<iostream>
using namespace std;

int sum ( const int numbers [] , const int numbersLen ) {
	return numbersLen == 0 ? 0 : numbers [0] + sum ( numbers + 1, numbersLen - 1) ;
}

int main(){
	int arr[]={3,2,3};
	cout << sum(arr,3);
	return 0;
}
