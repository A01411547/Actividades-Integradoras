Quickjoin data structure

Las estructuras de datos quickjoin son una manera de trabajar con
operaciones de conjuntos en programación utilizando como base Las
posiciones de los arreglos. 
Para lograr representar los conjuntos, se le asigna a cada posición
del arreglo un valor clave. para determinar si un elemento se encuentra
relacionado con otro, se debe verificar si sus claves son iguales.


Algoritmos: 
El constructor asigna en un rango de 0 a n a cada una de las localidades de 
 memoria del arreglo con un identificador de conjunto diferente.
 Recibe el valor n que sera asignado al atributo size

FIND (p,q)
 Este algoritmo nos indica si el elemento p se encuentra dentro
 del mismo conjunto que el elemento q mediante la comparacion de
 sus numero clave. si este es igual entonces son del mismo conjunto

 Se utiliza cuando queremos saber si dos elementos estan en el mismo conjunto
 @params = int p, int q
 complejidad o(1)


JOIN ( p,q )
 Este algoritmo se encarga de recorrer en arreglo en busca
 de la clave que le corresponde al numero p, el cual será
 agregado al q. Después cambia todos los valores que coincidan
 por el valor clave de q, para representar la union realizada

Se utiliza cuando queremos que dos elementos esten en un mismo conjunto,  y para fusionar dos conjuntos entre sí. 
 @params = int p, int q
complejidad o(n) al unir conjuntos



Ejemplos de uso en problemas reales:
*Para determinar en una red social si una persona es un amigo en comun de otras dos personas (find)
*Para construccion de bases de datos y consultas por medio de queries (join, find)





Fuentes consultadas: 
Segewick R (2019). Case study: Union-Find. Consultado el 2 de diciembre de 2020, sitio web https://algs4.cs.princeton.edu/15uf/. 