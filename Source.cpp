#include <iostream>
#include "nodo.h"
#include <conio.h>
using namespace std;
int main() 
{
	nodo *inicio = 0;
	
	int longitud;
	//lista uno
	cout << "Ingrese longitud de lista de cadena: "<<endl;
	cin >> longitud;
	cout << "\nLista 1:";

	inicio=crearLista(longitud);
	imprimir(&inicio);

	_getwch();

}