#include <iostream>
using namespace std;

int main(){
	int i = 1;
	while (true){
		if(i > 10)
			break;
		cout << i << "\n";
		++i;
	}
	
	for (int i=0; i<=10; ++i){
		if(i%2 != 0)
			continue;
		cout << i << "\n";
	}
	
}
