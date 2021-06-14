#include"NumeroIrracional.h"

#if defined(_WIN32)
#include<conio.h>
#endif


int main(void)
{
	int x, y;

	cout <<"Ingrese valor Entero: ";
	cin >>x;
	cout <<"Ingrese valor Imaginario: ";
	cin >>y;

//	NumeroIrracional a(x, y), b(2, -2), c;
	NumeroIrracional a(x, y), b(3, 1), c;

	cout <<"\n";

	c = a + b;
	cout <<"Suma: ";
	a.Mostrar();
	cout <<" + ";
	b.Mostrar();
	cout <<" = ";
	c.Mostrar();
	cout <<"\n";

	c = a - b;
	cout <<"Resta: ";
	a.Mostrar();
	cout <<" - ";
	b.Mostrar();
	cout <<" = ";
	c.Mostrar();
	cout <<"\n";

	c = a * b;
	cout <<"Multiplicacion: ";
	a.Mostrar();
	cout <<" * ";
	b.Mostrar();
	cout <<" = ";
	c.Mostrar();
	cout <<"\n";

	c = a / b;
	cout <<"Division: ";
	a.Mostrar();
	cout <<" / ";
	b.Mostrar();
	cout <<" = ";
	c.Mostrar();
	cout <<"\n";

#if defined(_WIN32)
	getch();
#endif

	return (0);
}
