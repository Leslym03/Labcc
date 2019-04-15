#include<iostream>
using namespace std;
 
void BubbleSort(int size, int arr[]){
	int temp;
	for(int i=1;i<size;++i){
		for(int j=0;j<(size-i);++j)
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
		}
	}
}
 
 

int main(){
	int a[50],n;
	cout<<"Tamaño del arreglo: ";
	cin>>n;
	cout<<"Elementos del arreglo: "<<endl; 
	
	for(int i=0;i<n;++i)
		cin>>a[i];

	cout<<"Ordenado: ";
	
	BubbleSort(n, a);
	for(int i=0;i<n;++i)
		cout<<" "<<a[i];
		
	return 0;
}
