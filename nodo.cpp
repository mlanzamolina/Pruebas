#include "nodo.h"
#include <string>
#include <iostream>
#include <stdio.h>
#pragma warning (disable:4996)
using namespace std;
void insertar(nodo**headNodo, char*_cadena) 
{
	char*cadena = _cadena;
	
	
	if (*headNodo==nullptr)
	{
		nodo * nuevo = new nodo;
		nuevo->name = _cadena;
		*headNodo = nuevo;
		
	}
	else
	{
		nodo * actual = *headNodo;
		
		nodo * nuevo = new nodo;
		actual->siguiente = nuevo;
		nuevo->anterior = actual;
			nuevo->name = _cadena;
			
			actual = actual->siguiente;
			nuevo = *headNodo;


			/*if (strcmp(actual->name, cadena)>0 && strcmp(actual->siguiente->name, cadena)<0)
			{
				nodo * nuevo = new nodo;
				nuevo->name = _cadena;
				actual->siguiente = nuevo;
				nuevo->anterior = actual;
				
			}*/
			
	
		/**/

	}
	/*while (list!=0)
	{
		if (strcmp(cadenaAnterior,cadena)>0 and strcmp(cadenaSiguiente,cadena) >0)
		{

		}
		cadenaAnterior = list->name;
		list = list->siguiente;
		cadenaSiguiente = list->name;

		

	}*/
}
//char *cstr = new char[str.length() + 1];
//strcpy(cstr, str.c_str());
nodo * crearLista(int length)
{
	nodo*inicio = 0;
	char * cadena;
	string cadenaS;
	
	for (int i = 0; i < length; i++)
	{
		cout << "Ingrese cadena" << "[" << i+1 << "]: ";
		cin >> cadenaS;
		cadena = new char[cadenaS.length() + 1];
		strcpy(cadena, cadenaS.c_str());
		
		insertar(&inicio,cadena);

	}
	return inicio;
}

void imprimir(nodo **inicio)
{
	cout << "\n\n IMPRIMIR LISTA \n\n";

	nodo * actual = *inicio;

	while (true)
	{
		if (actual != 0)
		{
			cout << "[ " << actual->name << " ]<-->";
			actual = actual->siguiente;
		}
		else
		{
			cout << "end" << endl;
			break;
		}

	}
}

//void guardarLista(nodo **)
//{
//
//}
