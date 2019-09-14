#include "Recursividad.h"

#include <string>

Recursividad::Recursividad()
{

}

int Recursividad::Fibonacci(int num) {
	if (num <= 1){
		return 1;
	}
	else {
		return Fibonacci(num - 1) + Fibonacci(num - 2);
	}
}

int Recursividad::Factorial(int num) {
	if (num <= 1) {
		return 1;
	}
	else {
		return num*Factorial(num-1);
	}
}
//STACKOVERFLOW
int Recursividad::Palindromas(System::String^ palabra) {
	int num = palabra->Length;
	bool estado;
	int l = palabra->Length - 1, contt = 0;

	for (int j = 0; j < palabra->Length - 1; j++)
	{
		if (palabra[j] != palabra[l - j])
		{
			estado = false;
			contt++;
		}
		else if (contt == 0)
		{
			estado = true;

		}

	}
	if (estado) {
		return 1;
	}
	else
	{
		return 0;
	}
}

/*System::String^ ObtenerTexto(System::String^ ruta) {

}*/

