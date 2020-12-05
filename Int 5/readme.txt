Actividad Integradora 5: hashes

Carolina Herrera Martinez A01411547

En esta actividad hago uso de una tabla asociativa que 
forma parte de la librería std de c++; los mapas.

Esta estructura me permite implementar de manera nativa
algoritmos de asociación en mis programas, permitiéndome 
generar soluciones muy acertadas para problemas que 
requieran la implementación de estructuras de datos 
con la capacidad de relacionar una llave con un resultado.

Para esta actividad, me propuse a hacer un diccionario básico 
de pronombres en el idioma, cargando en los archivos multiples
idiomas.

==============================================================
Guía de uso:
Para iniciar, se debe escoger un idioma al cual traducir los 
pronombres. 
La lista de pronombres disponibles incluye:
-yo
-tu
-usted
-el
-ella
-nosotros
-ustedes
-ellos

Además, se agrega la opcion de añadir cualquier nuevo idioma 
mediante la creacion de un archivo con las siguientes caracteristicas

/////////////////////////////////////////
pronombre#1
pronombre#2
pronombre#n
0
traduccion#1
traduccion#2
traduccion#n
/////////////////////////////////////////

Casos de prueba:
Para los casos de prueba inlcuidos se esperan las siguientes salidas:

caso 1
comandos:
g++ main.cpp
./a.out < test1
salida:
La traduccion del pronombre seleccionado es : me
La traduccion del pronombre seleccionado es : we
La traduccion del pronombre seleccionado es : they
Gracias por usar el traductor de pronombres! Hasta pronto!



caso 2
comandos:
g++ main.cpp
./a.out < test2
salida:
La traduccion del pronombre seleccionado es : moi
La traduccion del pronombre seleccionado es : elle
La traduccion del pronombre seleccionado es : vous
La traduccion del pronombre seleccionado es : nous
Gracias por usar el traductor de pronombres! Hasta pronto!


Funciones:

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
