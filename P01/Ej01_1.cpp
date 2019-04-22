#include <iostream>
using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

int main(){
	double r = 5.0;
	double circle;
	
	const int pathwidth = 100;
	const char tabulator = '\t';
	
	circle = 2 * PI * r; // circule = 2 * 3.14159 *r
	cout << circle << NEWLINE;
	
	cout << "Tabulador = " << tabulator;
	return 0;
}
