#include <iostream>
using namespace std;

int main(){
	int x = (int)5.0; // float debe ser expl�citamente "cast" a int
	short s = 3;
	long l = s;// no necesita conversi�n expl�cita, 
			//pero long l = (long) s tambi�n es v�lido
	float y = s + 3.4; // el compilador convierte impl�citamente s 
			//a float para la adici�n
}
