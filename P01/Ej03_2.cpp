#include <iostream>
using namespace std;

int main(){
	int N ;
	cout << " Enter N : ";
	cin >> N ;
	int acc = 0;
	
	// manejar el primer número por separado
	cin >> acc ;
	int minVal = acc ;
	int maxVal = acc ;
	
	// luego procesar el resto de la entrada
	for(int i = 1; i < N ; ++ i ){
		int a;
		cin >> a ;
		acc += a ;
		
		if(a < minVal ){
			minVal = a ;
		}
		if(a > maxVal ){
			maxVal = a ;
		}
	}
	
	cout << " Mean : " << ( double ) acc / N << " \n ";
	cout << " Max : " << maxVal << " \n ";
	cout << " Min : " << minVal << " \n ";
	cout << " Range : " << ( maxVal - minVal ) << " \n ";
	
	return 0;
}
