#include<iostream>
#include<string>

using namespace std;

class Supervisor;

class Empleado
{
	public:

		void setNombre(string nombre);
		void setApellido(string apellido);
	    void setSueldoAnual(float sueldoAnual);
		friend float calcularSueldoMedioAnualPorDepartamento(Supervisor * supervisor, Empleado * empleado1, Empleado * empleado2);

	private:
		string nombre, apellido;
		float sueldoAnual;
		static const int numeroDePagos = 12;
};

class Supervisor
{
    public:
        void setNombre(string nombre);
		void setApellido(string apellido);
	    void setSueldoAnual(float sueldoAnual);
		friend float calcularSueldoMedioAnualPorDepartamento(Supervisor * supervisor, Empleado * empleado1, Empleado * empleado2);

   	private:
		string nombre, apellido;
		float sueldoAnual;
		static const int numeroDePagos = 12;

};

float calcularSueldoMedioAnualPorDepartamento(Supervisor * supervisor, Empleado * empleado1, Empleado * empleado2)
{
	return (supervisor->sueldoAnual + empleado1->sueldoAnual + empleado2->sueldoAnual) / 3;
}

int main()
{

	Empleado * p_empleado1 = new Empleado();
	Empleado * p_empleado2 = new Empleado();
	Supervisor * p_supervisor = new Supervisor();

	p_empleado1->setSueldoAnual(50500);
	p_empleado2->setSueldoAnual(50500);
	p_supervisor->setSueldoAnual(150000);

	cout <<"Sueldo Medio " <<calcularSueldoMedioAnualPorDepartamento(p_supervisor, p_empleado1, p_empleado2);

	return (0);
}
void Empleado::setNombre(string nombre)
{
	this->nombre = nombre;
}
void Empleado::setApellido(string apellido)
{
	this->apellido = apellido;
}
void Empleado::setSueldoAnual(float sueldoAnual)
{
	this->sueldoAnual = sueldoAnual;
}