#ifndef QUICKUNION_H
#define QUICKUNION_H

#include <iostream>


using namespace std;

// Clase QuickFind
// esta clase representa a una estructura de datos que cuenta con las
// funcionalidades de Union-Find de teoría de conjuntos.
// Mediante la representacion en arreglos es capaz de identificar si
// dos elementos diferentes pertenecen o no a un mismo conjunto. 
// ademas de poder realizar uniones entre estos mismos.


class QuickFind {
private:
	unsigned int *claves;
	unsigned int size;

public:
	QuickFind(unsigned int);
	~QuickFind();
	bool find(unsigned int, unsigned int);
	void join(unsigned int, unsigned int);
};

//El constructor asigna en un rango de 0 a n a cada una de las localidades de 
// memoria del arreglo con un identificador de conjunto diferente.
// Recibe el valor n que sera asignado al atributo size

QuickFind::QuickFind(unsigned int n) {
	claves = new unsigned int[n];
	size = n;
	for (unsigned int i = 0; i < n; i++) {
		claves[i] = i;
	}
}

// el destructor elimina el arreglo 
QuickFind::~QuickFind() {
	delete [] claves;
	claves = NULL;
	size = 0;
}


// Este algoritmo nos indica si el elemento p se encuentra dentro
// del mismo conjunto que el elemento q mediante la comparacion de
// sus numero clave. si este es igual entonces son del mismo conjunto

// complejidad o(1)
bool QuickFind::find(unsigned int p, unsigned int q) {
	if (p >= size) {
		throw runtime_error("Not found");
	}
	if (q >= size) {
		throw runtime_error("Not found");
	}

	return claves[p] == claves[q];
}


// Este algoritmo se encarga de recorrer en arreglo en busca
// de la clave que le corresponde al numero p, el cual será
// agregado al q. Después cambia todos los valores que coincidan
// por el valor clave de q, para representar la union realizada

//complejidad o(n)
void QuickFind::join(unsigned int p, unsigned int q) {
	unsigned int pclave;

	if (p >= size) {
		throw runtime_error("Not found");
	}
	if (q >= size) {
		throw runtime_error("Not found");
	}

	pclave = claves[p];
	for (int i = 0; i < size; i++) {
		if (claves[i] == pclave) {
			claves[i] = claves[q];
		}
	}
}

#endif