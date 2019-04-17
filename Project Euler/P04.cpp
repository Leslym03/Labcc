#include <iostream>
using namespace std;

int pal (){
	int pal, a, b, c=0, m=0;
	for (int i=100; i<999; i++){
		for(int j=100; j<999; j++){
			pal=i*j;
			a=pal;
			c=0;
			while (a>0){
				b=a%10;
				a=a/10;
				c=c*10+b;
			}
			if (pal==c && pal>m){
				m=pal;
			}
		}
	}
	return m;
}

int main(){
	cout<< pal()<<endl;
}
