#ifndef NUMEROHEXADECIMAL_H
#define NUMEROHEXADECIMAL_H
#include "NumeroBinario.h"
#include "NumeroDecimal.h"
#include <iostream>

class NumeroHexadecimal
{
	friend std::istream& operator>>(std::istream &, NumeroHexadecimal &);
	friend std::ostream& operator<<(std::ostream &, const NumeroHexadecimal &);
	friend NumeroHexadecimal& operator+(const NumeroHexadecimal &, const NumeroHexadecimal &);
	friend NumeroHexadecimal& operator-(const NumeroHexadecimal &, const NumeroHexadecimal &);
public:
	NumeroHexadecimal(char*);
	NumeroBinario toBinario();
	NumeroDecimal toDecimal();
	NumeroHexadecimal();

private:
	char*arreglo;

};


#endif // !NUMEROHEXADECIMAL_H

