// file: main.cpp
// Carolina Herrera Mtz A01411547 
// Actividad integradora 5 
// 30/11/2020

#include <iostream>
#include <sstream>
#include <istream>
#include <fstream>
#include <vector>
#include <map>

using namespace std;
//========================================================
// Funcion seleccionarIdioma
// Esta funcion se encarga de abrir el archivo con las traducciones
// del idioma seleccionado por el usuario. 
// Crea dos vectores, uno para cada seccion del archivo
// y una vez que estan creados, crea un mapa que asocia a cada 
// indice del vector, guardando asi las traducciones
// Complejidad o(n)

// parametros: mapa cargado con traducciones, vector de palabras en español y vector de palabras en idioma extranjero
//========================================================

void seleccionarIdioma(map<string,string> &traduccion, vector<string> &original, vector<string> &translation  ){
  ifstream inputFile;
  ofstream output;
  string line, word, inputName;

  int count;
  vector<string> lista;


  cout << "Bienvenido al traductor de pronombres en c++ ! :D" <<endl;

  cout << "La base de datos actual incluye los siguientes idiomas: " << endl << "ingles" << endl << "frances" << endl;

  cout << "Selecciona un idioma introduciendo el nombre tal cual aparece en la lista : ";
  cin >> inputName;
  
  cout << endl; 

  inputFile.open(inputName);
  if ( inputFile.fail() ){ 
    throw runtime_error("El idioma no se encuentra o no se escribió su nombre tal cual se muestra en la lista.");
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

bool transTime = false;
  for (int i = 0; i < lista.size() ; i++){
    if (lista[i] == "0"){
        transTime = true;
    }
    else if (transTime == false){
      original.push_back(lista[i]);
    }
    else {
      translation.push_back(lista[i]);
    }
  }

}

//========================================================
// Funcion traducir
// Esta funcion se encarga de realizar la consulta en la 
// estructura de datos tipo hash para obtener la traduccion
// deseada. Al finalizar cuenta con una funcion recursiva 
// para definir si el usuario desea seguir traduciendo mas 
// palabras.

// complejidad: o(log(n)) <- para cada busqueda

// parametros: mapa cargado con traducciones, vector de palabras en español y vector de palabras en idioma extranjero
//========================================================

void traducir(map<string,string> &traduccion, vector<string> &original, vector<string> &translation){
  for (int n = 0; n < translation.size(); n++) {
      traduccion[original[n]] = translation[n];
  }
  // o(log(n))
  cout << "Introduce el pronombre en español que deseas traducir" << endl << "Pronombres disponibles: \n yo \n tu \n usted \n el \n ella \n nosotros \n ustedes \n ellos \n ellas \n: ";
  string pregunta;
  cin >> pregunta;
  cout << "La traduccion del pronombre seleccionado es : "<<traduccion[pregunta];

  char decision;
  cout << "\n Si desea traducir otro pronombre introduzca Y, de lo contrario introduzca n (Y/n) \n : ";
  cin >> decision;
  if (decision == 'Y')    traducir(traduccion,original,translation);
  

}

int main() {

  vector<string> original,translation;
  map<string,string> traduccion;

  seleccionarIdioma(traduccion, original, translation);

  traducir(traduccion,original,translation);

  cout << "Gracias por usar el traductor de pronombres! Hasta pronto!"<<endl;

}