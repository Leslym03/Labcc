#include <iostream>
using namespace std;

int main(){
	int a,b,c,x;
	for (a=1;a<500;a++){
		for(b=1; b<500; b++){
			for (c=1; c<1000;c++){
				if (a+b+c==1000){
					if((a*a)+(b*b)==(c*c)){
						x=a*b*c;
					}
				}
			}		
		}
	}
	
	cout << x;
	return 0;
}
