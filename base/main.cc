/**********************************************************************************************
 *
 * Asignatura: "Estructuras de Datos" - ICI313
 * Código base Tarea#1
 **********************************************************************************************/

#include <iostream>
#include <string>

#include <ListaEstatica.hpp>
#include <Nodo.hh>


class Nodo{
public:
	int key;
	std::string dato;
	
	Nodo(int k, std::string d);

	friend std::ostream& operator<< (std::ostream& os, const Nodo& n);
};

Nodo::Nodo(int k, std::string d): key(k), dato(d)
{

}

std::ostream& operator<< (std::ostream& os, const Nodo& n)
{
	os << n.dato;
	return(os);
}



int main(int argc, char* argv[])
{
	Nodo n1(0, "bye");
	Nodo n2(1, "hello");
	Nodo n3(2, "chao");
	Nodo n4(3, "hola");
	
	Nodo        valores[] = {n1 , n2, n3,  n4};
	int         cursor[]  = { -1, 0,   1,  2};
	int     indiceInicial = 3;
	
	ListaEstatica<Nodo> lista01(valores, cursor, indiceInicial);


	return EXIT_SUCCESS;
}
























