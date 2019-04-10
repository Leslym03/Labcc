#include<iostream>
#include<cstdlib> // define rand (), srand (), RAND_MAX
#include<ctime> // define el tiempo ()
using namespace std;

int main () {
	srand ( time (0) ); // tiempo (0) devuelve la hora actual como un número
	int randNum = rand () ;
	cout << "A random number : " << randNum << endl ;
	return 0;
}

