#if !defined(_NUMEROIRRACIONAL_H_)
#define _NUMEROIRRACIONAL_H_

#include<iostream>

using namespace std;

class NumeroIrracional
{
	private:
		double entera;
		double imaginaria;

	public:
		NumeroIrracional();
		NumeroIrracional(double, double);
		~NumeroIrracional();
		void Mostrar();

	friend NumeroIrracional operator + (NumeroIrracional, NumeroIrracional);
	friend NumeroIrracional operator - (NumeroIrracional, NumeroIrracional);
	friend NumeroIrracional operator * (NumeroIrracional, NumeroIrracional);
	friend NumeroIrracional operator / (NumeroIrracional, NumeroIrracional);
};

#endif /* _NUMEROIRRACIONAL_H_ */
