#include "Operaciones.h"

/*
 * main - punto de entrada
 */
int main(void)
{
    Operaciones op1 = Operaciones(4, 2);
    Operaciones op2 = Operaciones(3.1, 1.5);
    Operaciones op3 = Operaciones("4", "2");

 // Operaciones con tipo enteros
    cout <<"Operaciones con tipo enteros: "<<endl;
    op1.Suma();
    op1.Resta();
    op1.Multiplicacion();
    op1.Division();
    op1.Potencia();

    cout <<endl;

// Operaciones con tipo doubles
    cout <<"Operaciones con tipo double: "<<endl;
    op2.Suma();
    op2.Resta();
    op2.Multiplicacion();
    op2.Division();
    op2.Potencia();

    cout <<endl;

/*
 * Operaciones con tipo string
 * contiene la misma informacion de entrada
 * a la operacin con numeros tipo enteros.
 */
    cout <<"Operaciones con tipo string: "<<endl;
    op3.Suma();
    op3.Resta();
    op3.Multiplicacion();
    op3.Division();
    op3.Potencia();

    cout <<endl;
    getch();
// Finalizacion existosa
    return (0);
}