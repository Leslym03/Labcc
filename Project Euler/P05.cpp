#include <iostream>
using namespace std;

long mcd(int a,int b){
	if(a%b==0)
		return b;
	else
		return mcd(b,a%b);
}
 
int main(){
	long mcm = 0;
	int aux = 1;
	for(int i=1; i<20; i++){
		mcm = (aux*(i+1)) / mcd(aux,i+1);
		aux= mcm;
	}

	cout << mcm << endl;
	return 0;
}


