#if !defined(_EMPLEADO_H_)
#define _EMPLEADO_H_

#include<iostream>

using namespace std;

class Empleado
{
    private:
        string empleado;

    public:
        Empleado();
        ~Empleado();
        void setNombre(string);
        string getNombre() const;

};
#endif /* _EMPLEADO_H_ */