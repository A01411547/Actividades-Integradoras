Evidencia 4. Grafos

En esta evidencia decidí crear un programa con la siguiente aplicacion real

El programa esta pensado para ser utilizado por personas que recien
acaban de llegar a un nuevo vecindario. Ellos no conocen el lugar,
por lo que el programa les permitira consultar datos basicos 
sobre la ubicacion de las casas, esto mediante la implementación
de grafos.

De inicio, las casas se mapean en un grafo el cual es creado en 
base a la entrada de datos.txt 

Funciones.
Depth first search.
Este algoritmo realiza una bisuqeda en profundidad del arbol, llegando hasta
el final de cada nodo antes de pasar a revisar el siguiente camino. 
Complejidad o(v+e) donde v es el numero de vertices y e es el numero de arcos


Breadth first search es un recorrido de busqueda por niveles dentro del 
grafo. Complejidad o(v+e) al igual que la busqueda dfs


Camino. Se encarga de realizar un recorrido en busqueda de llegar de un punto a otro, generando
un registro de todos los elementos recorridos. complejidad (v+e)

isTree. este algoritmo busca si dentro del grafo se cierra algun ciclo, ademas de revisar que el grafo
este conectado. Se encarga de revisar mediante busqueda que no se llegue dos veces al mismo
nodo y a la vez que todos los vertices sean alcanzables. complejidad o(v+e) ya que se recorre todo 
el grafo

topological sort. este algortimo se usa para ordenar vertices de forma lineal para que por cada
arco dirigirdo u v, el vertice u venga antes que v de manera ordenada. 
Este algorimo cuenta con una complejidad o(v+e)

bipartiteGraph . este algortimo revisa si los vertices de el grafo se pueden dividir en dos
subconjuntos que estan interconectados uno con el otro, como si fueran dos conjuntos separados que
se conectan solo con miembros de otro conjunto. Complejidad o(v+e)


Caso de prueba.

Input :
B
A 
A 
B 

Output:
El orden para recorrer las casas es 0 4 5 1 3 6 2
No se ecuentran colindantes
Gracias por utilizar el sistema. Hasta pronto