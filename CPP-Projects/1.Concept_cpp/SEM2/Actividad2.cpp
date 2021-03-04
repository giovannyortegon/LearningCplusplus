// Este es un ejemplo de comentarios

/*
Este es otro ejemplo de comentario
*/

#include<iostream> 
// Header, ayuda definir el manejo estandar de entrada/salida
#include<stdlib.h>
/*
	Header, ayuda a definir funciones de proposito general y
	de memoria dimanica; en este caso a EXIT_SUCCESS 
*/

using namespace std; 
/* 
	usdo del bloque de la libreria std (standard) de C++
	para uso directo de sus funciones.
*/

int main() // Funcion principal.
{
	int a, b; // Declaracion de variables en memoria sin inicializar.
	
	cout<<"Ingrese el primer numero:"<<endl;
	// Salida en pantalla del mensaje indicado entre comillas dobles.
	cin>>a; 
	/* 
		Ubica en memoria el valor ingresado por el usuario
		en la variables declarada como 'a'.
	*/
	cout<<"Ingrese el segundo numero:"<<endl;
	// Salida en pantalla del mensaje indicado entre comillas.
	cin>>b;
	/* 
		Ubica en memoria el valor ingresado por el usuario
		en la variables declarada como 'b'.
	*/
	cout<<"La suma de los numeros es: "<<a + b<<endl;
	// Salida en pantalla del resultado de la suma entre las variables a y b.
	cout<<"La resta de numeros es: "<<a - b<<endl;
	// Salida en pantalla del resultado de la resta entre las variables a y b.
	cout<<"La multiplicacion de los numeros es: "<<a * b<<endl;
	// Salida en pantalla del resultado de la multiplicacion entre las variables a y b.
	cout<<"La division de los numeros es: "<<a / b<<endl;
	// Salida en pantalla del resultado de la division entre las variables a y b.
	cout<<"El residuo es: "<<a % b<<endl;
	// Salida en pantalla del residuo(modulo) de la division entre las variables a y b.
	
	system("pause");
	/*
		En este caso "system" urealiza una pausa en el sistema
		y evita el cierre inmediato la consola.
	*/
	return EXIT_SUCCESS; 
	// Indica al sistema que el programa se completo sin ningun error.
}