#include <iostream>
using namespace std;

void insertionSort(int size, int arr[]) {
	int i, j, key;
	for (i = 1; i < size; i++) {
		j = i;
 		while (j > 0 && arr[j - 1] > arr[j]) {
 			key = arr[j];
 			arr[j] = arr[j - 1];
 			arr[j - 1] = key;
 			j--;
 		}
	}
}


int main() {
	int a[50],n;
	cout<<"Tamaño del arreglo: ";
	cin>>n;
	cout<<"Elementos del arreglo: "<<endl; 
	
	for(int i=0;i<n;++i)
		cin>>a[i];

	cout<<"Ordenado: ";
	
	insertionSort(n, a);
	for(int i=0;i<n;++i)
		cout<<" "<<a[i];
		
	return 0;
}

