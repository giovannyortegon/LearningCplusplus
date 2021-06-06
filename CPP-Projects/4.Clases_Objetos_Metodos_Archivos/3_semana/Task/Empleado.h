#if !defined(_EMPLEADO_H_)
#define _EMPLEADO_H_

#include<iostream>

using namespace std;
class Empleado
{
    private:
        string * empleado;
        int nEmpleado;
    protected:
        int * setMemoria(unsigned int);
    public:
        Empleado();
        Empleado(unsigned int);
        ~Empleado();
        void setNombre(string);
        string getNombre() const;

};
#endif /* _EMPLEADO_H_ */