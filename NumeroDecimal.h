#ifndef NUMERODECIMAL_H
#define NUMERODECIMAL_H
#include <iostream>

class NumeroDecimal
{
	friend std::istream& operator>>(std::istream &, NumeroDecimal &);
	friend std::ostream& operator<<(std::ostream &, const NumeroDecimal &);
	friend NumeroDecimal& operator+(const NumeroDecimal &, const NumeroDecimal &);
	friend NumeroDecimal& operator-(const NumeroDecimal &, const NumeroDecimal &);
private:
	unsigned int numero;
public:
	NumeroDecimal(unsigned int);
	NumeroHexadecimal toHexadecimal();
	NumeroBinario toBinario();
	NumeroDecimal();
};

#endif // !
