#include "NumeroIrracional.h"

// Contructor default
NumeroIrracional::NumeroIrracional()
:entera(1), imaginaria(1){}
//constructor con dos parametros
NumeroIrracional::NumeroIrracional(double Entera, double Imaginaria)
:entera(Entera),  imaginaria(Imaginaria){}
// destructor
NumeroIrracional::~NumeroIrracional(){}
void NumeroIrracional::Mostrar()
{
	cout <<"("<<entera;
	if (imaginaria > 0)
		cout <<" +";

	cout <<" "<<imaginaria <<"i)";
}
NumeroIrracional operator + (NumeroIrracional x, NumeroIrracional y)
{
	NumeroIrracional res;

	res.entera = x.entera + y.entera;
	res.imaginaria = x.imaginaria + y.imaginaria;

	return (res);
}
NumeroIrracional operator - (NumeroIrracional x, NumeroIrracional y)
{
	NumeroIrracional res;

	res.entera = x.entera - y.entera;
	res.imaginaria = x.imaginaria - y.imaginaria;

	return res;
}
NumeroIrracional operator * (NumeroIrracional x, NumeroIrracional y)
{
	NumeroIrracional res;

	res.entera = (x.entera * y.entera) + ((x.imaginaria * y.imaginaria)*(-1));
	res.imaginaria = (x.entera * y.imaginaria) + (x.imaginaria * y.entera);

	return (res);
}
NumeroIrracional operator / (NumeroIrracional x, NumeroIrracional y)
{
	NumeroIrracional res, div, divr, mul;

	mul = y;
	mul.imaginaria = (-mul.imaginaria);
	div = x * mul;
	divr = y * mul;

	if (divr.entera == 0)
	{
		res.entera = div.entera / divr.imaginaria;
		res.imaginaria = div.entera / divr.imaginaria;
	}
	else
	{
		res.entera = div.entera / divr.entera;
		res.imaginaria = div.imaginaria / divr.entera;
	}

	return res;
}
