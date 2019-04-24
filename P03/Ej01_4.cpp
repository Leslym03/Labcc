#include <iostream>
#include <string>
using namespace std;

int main(){
	string s = "Hello";
	s+= " World!";
	if(s== "Hello World!"){
		cout << "Success!" << endl;
	}
	cout << s.substr(6,6) << endl;
	cout << s.find("World") << endl;
	cout << s.find('l',5);
	return 0;
}
