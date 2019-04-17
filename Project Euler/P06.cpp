#include <iostream>
using namespace std;

int sumcua(int x);
int cuasum(int x);

int main(){
	int n,a=0;
	cin >>n;
	a=cuasum(n)-sumcua(n);
	cout << a;
	return 0;
}

int sumcua(int x){
	int s=0;
	for (int i=1; i<=x; i++){
		s=s+(i*i);
	}
	return s;
}

int cuasum(int x){
	int s=0;
	for (int i=1; i<=x; i++){
		s=s+i;
	}
	s=(s*s);
	return s;
}
