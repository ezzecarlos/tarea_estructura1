 #pragma once
 /*
 * Definición  e implementación de una Lista Estática basada en arreglos
 *
 */


#include <iostream>
#include <string>
#include <iterator>


template <typename V>
class ListaEstatica {
private:
	V*   valores;
	int* cursor;
	int  indiceInicial;

public:
	ListaEstatica();
	ListaEstatica(V v[], int c[], int ii);
	void show();

	V operator[](const uint32_t index);
};


template <typename V>
ListaEstatica<V>::ListaEstatica()
{

}

template <typename V>
ListaEstatica<V>::ListaEstatica(V v[], int c[], int ii)
{
	valores = v;
	cursor  = c;
	indiceInicial = ii;
}

// Un método no debe mostrar datos en pantalla.
// Este metodo debe ser modificado para que retorne
// la estructura. Sugerencia: utiliza stringstream
template <typename V>
void ListaEstatica<V>::show()
{
	int indiceActual = indiceInicial;
	
	while(indiceActual != -1){
		std::cout << valores[indiceActual] << " -> ";
		indiceActual = cursor[indiceActual];
	}
	
	std::cout << " FIN\n";
}

template <typename V>
V ListaEstatica<V>::operator[](const uint32_t index)
{
	return(valores[index]);
}

