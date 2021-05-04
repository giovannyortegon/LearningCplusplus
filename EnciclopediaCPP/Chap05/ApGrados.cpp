#include<iostream>
#include<iomanip>

using namespace std;

class CGrados
{
	private:
		float gradosC;		// grados centigrados
	public:
		void AsignarCentigrados(float gC)
		{
			// Establecer el atributo grados centigrados
			gradosC = gC;
		}
		float ObtenerFahrenheit() const
		{
			// Retorna los grados fahrenheit equivlentes a gradosC
			return 9.0F/5.0F * gradosC + 32.0;
		}
		float ObtenerCentigrados() const
		{
			return gradosC;		// Retorna los grados centigrados
		}

};

int main()
{
	// Definicion de constantes
	const int limInferior = -30;
	const int limSuperior = 100;
	const int incremento = 6;

	// Declaracion de variables
	CGrados grados;		// Objeto grados
	int gradosCent = limInferior;
	float gradosFahr = 0;

	cout <<setiosflags(ios::fixed);		// Coma fija

	while (gradosCent <= limSuperior)
	{
		// Asignar al objeto grados el valor en grados centigrados
		grados.AsignarCentigrados(gradosCent);
		// Obtener del objeto grados los grados fahrenheit
		gradosFahr = grados.ObtenerFahrenheit();
		// Escribir la  siguiente linea de la tabla
		cout <<setw(8) << gradosCent <<" C"
			 <<setw(8) << setprecision(2) <<gradosFahr <<" F\n";
		// Siguiente valor
		gradosCent += incremento;
	}
}
