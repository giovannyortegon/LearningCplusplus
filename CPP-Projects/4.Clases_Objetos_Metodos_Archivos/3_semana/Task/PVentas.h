#if !defined(_PVENTAS_H_)
#define _PVENTAS_H_

#include "Empleado.h"

class PVentas: public Empleado
{
    private:
        int * Meses;
        unsigned int NMeses;

    protected:
        int * setMemoria(unsigned int);

    public:
        PVentas();
        PVentas(unsigned int);
        ~PVentas();
        void setMes(int, unsigned int);
        int getMes(unsigned int) const;
        int numeroElementos() const;
        double calcularPromedio();
        void Visualizar();
};

#endif /* _PVENTAS_H_ */