#include <iostream>
using namespace std;

bool Primo(int x){
	bool p = true;
	for (int i=2; i<x; ++i){
		if (x%i==0){
			p = false;
			break;
		}		
	}
	return p;
}
int mayprimo(long long n){
    long long mayor=0;
    for(long long i=1;i<n/2+1;i++){
        if(n%i==0 && Primo(i)){
              mayor=i;
        	cout<<i<<endl;
         }
    }
    return mayor;

}

int main(){
	long long x;
	cin >> x ;
	cout << mayprimo(x) << endl ;
}
