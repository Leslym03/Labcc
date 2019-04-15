#include <iostream>
using namespace std;

int main(){
	int A[20][20],B[20][20],C[20][20],k,m,n;
	//Matriz A
	cout << "Matriz A"<<endl;
	cout << "Filas de A: ";cin >>k;
	cout << "Columnas de A: ";cin >>m;
	cout <<"\n";
	for (int i=0; i<k; i++){
		for (int j=0; j<m; j++){
			cout <<"Valor para A["<<i<<"] ["<<j<<"]: ";
			cin >> A[i][j];
		}
	}
	//Matriz B
	cout << "Matriz B"<<endl;
	cout << "Filas de B: ";cin >>m;
	cout << "Columnas de B: ";cin >>n;
	cout <<"\n";
	for (int i=0; i<k; i++){
		for (int j=0; j<m; j++){
			cout <<"Valor para B["<<i<<"] ["<<j<<"]: ";
			cin >> B[i][j];
		}
	}
	//Inicializando matriz C
	for (int i=0; i<k; i++){
		for (int j=0; j<n; j++){
			C[i][j]=0;
		}
	}
	
	//Generando matriz C
	for (int i=0; i<k; i++){
		for (int j=0; j<n; j++){
			for (int z=0; z<m; z++){
				C[i][j]+=A[i][z]*B[z][j];
			}
		}
	}
	
	//Imprimir matriz A
	cout <<"Matriz A"<<endl;
	for (int i=0; i<k; i++){
		for (int j=0; j<n; j++){
			cout << A[i][j]<<" ";
		}
		cout<< endl;
	}
	cout<<endl;
	//Imprimir matriz B
	cout <<"Matriz B"<<endl;
	for (int i=0; i<k; i++){
		for (int j=0; j<n; j++){
			cout << B[i][j]<<" ";
		}
		cout<< endl;
	}
	cout<<endl;
	//Imprimir matriz C
	cout <<"Matriz C"<<endl;
	for (int i=0; i<k; i++){
		for (int j=0; j<n; j++){
			cout << C[i][j]<<" ";
		}
		cout<< endl;
	}
	return 0;
}
