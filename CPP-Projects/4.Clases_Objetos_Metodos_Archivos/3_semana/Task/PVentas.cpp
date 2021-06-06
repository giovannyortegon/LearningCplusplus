#include "PVentas.h"

PVentas::PVentas()
:Empleado(), NMeses(4), Meses(setMemoria(NMeses))
{
    fill(Meses, Meses + NMeses, 0);
}
PVentas::PVentas(unsigned int nEmp)
:Empleado(nEmp), NMeses(4), Meses(setMemoria(NMeses))
{
    fill(Meses, Meses + NMeses, 0);
}
PVentas::PVentas(unsigned int nEmp, unsigned int nMes)
:Empleado(nEmp), NMeses(nMes), Meses(setMemoria(NMeses))
{
    fill(Meses, Meses + NMeses, 0);
}
int * PVentas::setMemoria(unsigned int mem)
{
    try
    {
        int * memoria = new int[mem];
        return memoria;
    }
    catch (bad_alloc e)
    {
        cout <<"Memoria Insuficiente";
        exit(-1);
    }
}

void PVentas::setMes(int elemento, unsigned int i)
{
    Meses[i] = elemento;
}
int PVentas::getMes(unsigned int i) const
{
    return Meses[i];
}
int PVentas::numeroElementos() const
{
    return NMeses;
}
double PVentas::calcularPromedio()
{
    int i = 0, suma = 0;
    double promedio;
    
    while (i < NMeses)
    {
        suma += Meses[i++];
    }

    return (suma / NMeses);
}
void PVentas::Visualizar()
{
    int i = 0;

    while (i < NMeses)
    {
        cout <<"Mes "<<i + 1 <<": $";
        cout <<Meses[i++] <<" ";
    }
}
PVentas::~PVentas()
{
    delete [] Meses;
}