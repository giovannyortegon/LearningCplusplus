#include "PVentas.h"
#include<iomanip>
#include<conio.h>


int main(void)
{
    int cant, valor, promedio, TotalPromedio;
    string nombre;

    cout <<"\n***********************************\n";
    cout <<"******** CALCULAR PROMEDIO ********";
    cout <<"\n***********************************\n";    

    cout <<"\nDe Cuantos vendedores desea ver el promedio: ";
    cin >>cant;

    if (cant <= 0);
    {
        cout <<"\n[!] Numero no valido. Debe ser 1 o mayor." <<endl;
        return (-1);
    }
    else if (cant == 1)
    {
        PVentas * empleado = new PVentas(); 
    }

    empleado[0].set


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
        TotalPromedio += promedio; 
    }

    cout <<"\n\n**********************************\n";
    cout <<"* Promedio Total Venta: $";
    cout <<setw(2) <<TotalPromedio / cant <<" *";
    cout <<"\n**********************************\n";

    delete [] empleado;
    getch();
    return (0);
}