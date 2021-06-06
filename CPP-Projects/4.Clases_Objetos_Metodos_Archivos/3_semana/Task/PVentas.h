#if !defined(_PVENTAS_H_)
#define _PVENTAS_H_

#include "Empleado.h"

class PVentas: public Empleado
{   
    private:
        string empleado;
        int * Meses;
        unsigned int NMeses;

    public:
        PVentas();
        PVentas(unsigned int);
        PVentas(unsigned int, unsigned int);
        ~PVentas();
        void setMes(int, unsigned int);
        int getMes(unsigned int) const;
        int numeroElementos() const;
        double calcularPromedio();
        void Visualizar();
};

#endif /* _PVENTAS_H_ */