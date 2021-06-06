#include "PVentas.h"
#include<iomanip>
//#include<conio.h>


int main(void)
{
    int cant = 0, valor = 0, promedio = 0, TotalPromedio = 0;
    string nombre;

    cout <<"\n***********************************\n";
    cout <<"******** CALCULAR PROMEDIO ********";
    cout <<"\n***********************************\n";    

    cout <<"\nDe Cuantos vendedores desea ver el promedio: ";
    cin >>cant;

    PVentas * empleado = new PVentas[cant];

    cout <<"\nIntroduzca el nombre de los Empleados y Totalidad por Mes:\n";
    for (int i = 0; i < cant; i++)
    {
        cout <<"\nEmpleado " <<i + 1;
        cout <<"\nNombre: ";
        cin >>nombre;
        empleado[i].setNombre(nombre);

        for (int j = 0; j < empleado[i].numeroElementos(); j++)
        {
            cout <<"Mes " <<j + 1 <<": $";
            cin >>valor;
            empleado[i].setMes(valor, j);
        }
        cout <<"\n";
    }

    cout <<"\n***********************************\n";
    cout <<"************* REPORTE *************";
    cout <<"\n***********************************\n";

    for (int i = 0; i < cant; i++)
    {
        cout <<"\nNombre empleado: " <<i + 1 <<"\n";
        cout <<empleado[i].getNombre() <<"\n";
        cout <<"Datos de Venta de " <<empleado[i].numeroElementos() <<" Meses\n";
        empleado[i].Visualizar();
        cout <<endl;
        promedio = empleado[i].calcularPromedio();
        cout <<"Promedio de Venta: $";
        cout <<setw(2) <<promedio;
        
        if (cant > 1)
            TotalPromedio += promedio;
        else
            TotalPromedio = promedio;
    }

    cout <<"\n\n**********************************\n";
    cout <<"* Promedio Total Venta: $";
    cout <<setw(2) <<TotalPromedio / cant <<" *";
    cout <<"\n**********************************\n";

    delete [] empleado;
//    getch();
    return (0);
}