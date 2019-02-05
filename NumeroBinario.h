#ifndef NUMEROBINARIO_H
#define NUMEROBINARIO_H
#include "NumeroDecimal.h"
#include "NumeroHexadecimal.h"
#include <iostream>
#define charMax 32;

class NumeroBinario{
	friend std::istream& operator>>(std::istream &, NumeroBinario &);
	friend std::ostream& operator<<(std::ostream &, const NumeroBinario &);
	friend NumeroBinario& operator+(const NumeroBinario &, const NumeroBinario &);
    friend NumeroBinario& operator-(const NumeroBinario &, const NumeroBinario &);
private:
	char * nombre;
public:
    NumeroBinario(char*);	 
	NumeroDecimal toDecimal();
	NumeroHexadecimal toHexadecimal();
    NumeroBinario();

};

NumeroBinario::NumeroBinario()
{
}

#endif // !NUMEROBINARIO_H
