#include <iostream>
using namespace std;

int Prim(unsigned long long N){
	long long p;
	for(long long i = 2; N > 0; ++ i ){
		bool isPrime = true ;
		for (int j = 2; j < i ; ++ j ){
			if(i % j == 0){
				isPrime = false ;
				break ;
			}
		}
		if(isPrime){
			--N ;
			p=i;
		}
	}
	return p;
}


int main(){
	cout << Prim(6);
	return 0;
}
