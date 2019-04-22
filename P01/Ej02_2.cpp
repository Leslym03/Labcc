#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	//for loop
	/for (; N-- >0;){
		cout << "Hello, World!\n";
	}
	//while loop
	while(N-- > 0){
		cout << "Hello, World!\n";
	}
	//do.. while loop
	do{
		cout << "Hello, World!\n";
	}
	while (--N > 0);
	return 0;
}
