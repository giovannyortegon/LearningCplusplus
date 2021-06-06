#include "Empleado.h"

Empleado::Empleado(){}
void  Empleado::setNombre(string nombre)
{
    empleado = nombre;
}
string Empleado::getNombre() const
{
    return empleado;
}
Empleado::~Empleado(){}