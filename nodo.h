#pragma once
#ifndef NODO_H
#define NODO_H
struct nodo 
{
	char*name;
	nodo*siguiente;
	nodo*anterior;
};

	void insertar(nodo**, char*);
	nodo*crearLista(int);
	void imprimir(nodo**);
	//void guardarLista(nodo**);

#endif // !NODO_H
