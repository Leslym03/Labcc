#include <iostream>
using namespace std;

void quickSort(int *array, int low, int high){
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j){
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j){
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort(array, low, j);
    if (i < high)
        quickSort(array, i, high);
}

int main(){
    int a[50],n;
	cout<<"Tamaño del arreglo: ";
	cin>>n;
	cout<<"Elementos del arreglo: "<<endl; 
	
	for(int i=0;i<n;++i)
		cin>>a[i];

	cout<<"Ordenado: ";
	
	quickSort(a, 0, n-1);
	for(int i=0;i<n;++i)
		cout<<" "<<a[i];
		
    return (0);
}
