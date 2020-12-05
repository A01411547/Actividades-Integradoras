#include <iostream>
#include "quickunion.h"
using namespace std;
int main() {

  cout << "Demostracion del algoritmo quickJoin \n\n";
  cout << "Creando un arreglo con 10 elementos diferentes, cada uno de diferente conjunto \n Elemento: 0 1 2 3 4 5 6 7 8 9 \n Conjunto: 0 1 2 3 4 5 6 7 8 9\n \n";
  QuickFind sf (10);

  cout << "Uniendo el elemento 3 y 5 al mismo conjunto \n Elemento: 0 1 2 3 4 5 6 7 8 9 \n Conjunto: 0 1 2 5 4 5 6 7 8 9\n \n";
  sf.join(3, 5);

  cout << "Uniendo el conjunto del elemento 3  al conjunto del elemento 7 \n Elemento: 0 1 2 3 4 5 6 7 8 9 \n Conjunto: 0 1 2 7 4 7 6 7 8 9\n \n";
  sf.join(3, 7);
  
  cout << "Consultado si los elementos 3 y 5 pertenecen al mismo conjunto.\n Resultado = " << sf.find(3, 5) << endl;

  cout << "Consultado si los elementos 3 y 7 pertenecen al mismo conjunto.\n Resultado = " << sf.find(3, 7) << endl;

  cout << "Consultado si los elementos 3 y 4 pertenecen al mismo conjunto.\n Resultado = " << sf.find(3, 4) << endl;

}