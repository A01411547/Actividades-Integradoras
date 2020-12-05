// Evidencia Grafos. Carolina Herrera Martinez A01411547

#include <iostream>
#include <cstring>
#include "graph.h"

using namespace std;

void menuInicio(Graph g){
    cout << "Introduce \"A\" para saber si todas las casas del vencindario son colindantes o no" << endl;
    cout << "Introduce \"B\" para saber en que orden se encuentran las casas desde la entrada" << endl;
    cout << "Introduce \"C\" para saber si las casas están en dos hileras o en una" << endl;        
    char entrada;
    cin >> entrada;
  
  if (entrada == 'A') {
      cout<< ( true == (g.isTree() )? "No se ecuentran colindantes\n" : "Si se encuentran colindantes\n"   );
    }
    else if (entrada == 'B') {
            cout << "El orden para recorrer las casas es " << g.topologicalSort() << endl;

    }
    else if (entrada == 'C') {
            cout<< ( true == (g.bipartiteGraph() )? "No se ecuentran en dos hileras\n" : "Si se encuentran en dos hileras\n"   );

     }

  cout << endl << "Consulta terminada. Si deseas hacer otra consulta, introduce A, de lo contrario introduce B." << endl;
  //char entrada;
  cin>> entrada;
  if (entrada == 'A'){
    menuInicio(g);
  }
  else {
    cout <<"Gracias por utilizar el sistema. Hasta pronto" << endl;
  }

}


int main(int argc, char* argv[]) {

    cout << "Bienvenid@ al sistema de busqueda de casas. " << endl;
    cout << "=======================================" << endl << endl;
    
    cout << "Este sistema le permitirá conocer todo acerca de su nuevo vecindario. Bienvenido! \n consulta el sigiuente menú para explorar los datos del vecindario \n";


    cout << "La base de datos \"datos.txt\" se encuentra siendo procesada" << endl; 
    
    Graph g;

    string g_ans;

    g.loadGraphList("datos.txt", 7, 7);



    cout << "Sistema listo." << endl << "A continuación, se muestra el menú de opciones."<<endl << endl;

   menuInicio(g);

    



}