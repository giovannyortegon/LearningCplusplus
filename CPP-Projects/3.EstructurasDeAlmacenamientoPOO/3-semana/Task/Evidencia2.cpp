#include<iostream>
#include<string>
#include<conio.h>

#define MAX 255
#define BUF 30
#define EMPLEADOS 100;

void ingreso_datos_empleados(const unsigned int n);
void mostar_datos_empleados(int *, char *, int *, char*, int *, ****)
using namespace std;

int main(void)
{
    int n_empleados, i;

    cout <<"De cuantos empleados desea generar pagos?: ";
    cin >> n_empleados;

    ingreso_datos_empleados(n_empleados);

    i = 0;

    while(i < n_empleados)
    {
        cout <<"\nEmpeado " <<i + 1 <<"\n";
        cout <<cedula[i] <<"\n";
        cout <<nombre[i] <<"\n";
        cout <<telefono[i] <<"\n";
        cout <<cargo[i] <<"\n";
        i++;
    }

}
void ingreso_datos_empleados(const unsigned int n_empleados)
{
    int cedula[EMPLEADOS], telefono[EMPLEADOS], salario_basico[EMPLEADOS];
    double HExtra[EMPLEADOS], DXPrestamo[EMPLEADOS], Ahorro[EMPLEADOS], SegSoc[EMPLEADOS];
    char SN = 'N';
    char nombre[EMPLEADOS][BUF], cargo[EMPLEADOS][BUF];


    int i = 0;

    while(i < n_empleados)
    {
        cout <<"\nEmpeado " <<i + 1 <<"\n";
        cout <<"Ingrese Numero de Cedula:\n";
        cin >>cedula[i];

        cin.ignore(MAX, '\n');
        cout <<"Ingrese Nombre Completo ";
        cout <<"(Primer Nombre y Primer Apellido):\n";
        cin.getline(nombre[i], BUF);

        cout <<"Ingrese Numero telefonico:\n";
        cin >>telefono[i];

        cin.ignore(MAX, '\n');
        cout <<"Ingrese cargo: ";
        cin.getline(cargo[i], BUF);

        cout <<"Realozo Horas Extras? (S/N): ";
        cin >>SN;
        if (SN == 'S' || SN == 's')
        {
            cout <<"Ingrese la cantidad: ";
            cin >>HExtra[i];
        }else
            HExtra[i] = 0; 

        cout <<"Ha optemido descuentos por prestamos? (S/N): ";
        cin >>SN;
        if (SN == 'S' || SN == 's')
        {
            cout <<"Ingrese el valor: ";
            cin >>DXPrestamo[i];
        }
        else
            DXPrestamo[i] = 0;

        cout <<"Ha realizado Ahorro Voluntario? (S/N): ";
        cin >>SN;
        if (SN == 'S' || SN == 's')
        {
            cout <<"Ingrese cantidad: ";
            cin >>Ahorro[i];
        }

        cout <<"Ingrese el valor por descuento de Seguridad Social";
        cin >>SegSoc;

        i++;
    }
}