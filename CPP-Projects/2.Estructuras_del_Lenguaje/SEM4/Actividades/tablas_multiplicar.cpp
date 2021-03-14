#include<iostream>
/*
 * main - Tablas de Miltiplicar
 */
using namespace std;

int main()
{
	int tabla = 1, multiplicador, producto;

	while (tabla)
	{
		cout <<endl <<"Tablas de Multiplicar" <<endl;
		cout <<endl <<"Tabla del 1" <<endl;
		cout <<"Tabla del 2" <<endl;
		cout <<"Tabla del 3" <<endl;
		cout <<"Tabla del 4" <<endl;
		cout <<"Tabla del 5" <<endl;
		cout <<"Tabla del 6" <<endl;
		cout <<"Tabla del 7" <<endl;
		cout <<"Tabla del 8" <<endl;
		cout <<"Tabla del 9" <<endl;

		cout <<endl <<"Seleccione una tabla de multiplicar: ";
		cin >>tabla;

		if (tabla <= 0 || tabla >=10)
			break;

		multiplicador = 1;

		while (multiplicador < 10)
		{
			producto = tabla * multiplicador;
			cout <<tabla <<" x " <<multiplicador <<" = " <<producto <<endl;
			multiplicador++;
		}
		break;
	}

	system("pause");

	return EXIT_SUCCESS;
}
