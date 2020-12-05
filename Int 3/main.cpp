#include <iostream>
#include <fstream>
#include <sstream>
#include "accesos.h"
#include <vector>
#include <string>
#include "heap.h"

using namespace std;

int main() {

ifstream inputFile;
  ofstream output;
  string line, word, inputName;

  int count;
  vector<string> lista;

  cout << "Evidencia 3.4 Carolina Herrera. Key: numero de accesos. Variable: meses con cantidades de acceso. \n \n =====================" << endl << "Bienvenido al sistema de administrador del gimnasio Rush. \n para consultar los meses con la mayor cantidad de ingresos de usuarios, \n por favor introduce el nombre del archivo (bitacora2_3) \n  ";


  cout << "input filename: ";
  cin >> inputName;
  
  cout << endl; 

  inputFile.open(inputName);
  if ( inputFile.fail() ){ 
    throw runtime_error("Wrong filename");
  }  
  else {
    while(getline(inputFile,line)) {
      stringstream s(line);
      count = 1;
      while (getline(s,word,' ')) {
        switch (count) {
          case 1:
            lista.push_back(word.substr(0,18));

          default:
            break;
        } 
        ++count;
      }
  }
    inputFile.close();
  }

 Heap<accesos> hp(lista.size()+1);
 accesos temp("");


  for (int item = 1; item < lista.size()-1; item++  ) {
     
     if (item == lista.size()-2){
      hp.push(temp);
    }
    else if (item == 1) {
      temp.mes = lista[item];
      temp.apariciones++;
    }
     else if (item != 1) {
      if (lista[item-1] == temp.mes) {
        temp.apariciones++;
      }
      else {
        hp.push(temp);
        temp.mes = lista[item];
        temp.apariciones = 1;

      }
      
     }
     
     
  }


 


cout << "Los 5 meses con mayor cantidad de accesos son :" << endl << endl ;

while (!hp.empty()){
  cout << hp.top().imprimir() << endl;
  hp.pop();
  cout<< endl;
  
}



}