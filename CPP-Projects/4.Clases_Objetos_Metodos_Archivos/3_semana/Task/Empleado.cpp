#include "Empleado.h"

Empleado::Empleado()
:nEmpleado(1), empleado(setMemoria(nEmpleado))
{
    fill(empleado, empleado + nEmpleado, 0);
}
Empleado::Empleado(unsigned int nEmp)
:nEmpleado(nEmp), empleado(setMemoria(nEmpleado))
{
    fill(empleado, empleado + nEmpleado, 0);
}
int * Empleado::setMemoria(unsigned int mem)
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
void  Empleado::setNombre(string nombre)
{
    empleado = nombre;
}
string Empleado::getNombre() const
{
    return empleado;
}
Empleado::~Empleado
{
    delete [] empleado;
}