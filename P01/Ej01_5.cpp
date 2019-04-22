#include <iostream>
using namespace std;

int main(){
	int x = (int)5.0; // float debe ser explícitamente "cast" a int
	short s = 3;
	long l = s;// no necesita conversión explícita, 
			//pero long l = (long) s también es válido
	float y = s + 3.4; // el compilador convierte implícitamente s 
			//a float para la adición
}
