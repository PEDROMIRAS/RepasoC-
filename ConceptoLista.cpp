
/*
LISTAS ENLAZADAS
Una lista enlazada consta de un numero de nodos con dos componentes
(campos), un enlace a la siguiente nodo de la lista y un valor,que
puede ser de cualquier tipo,
struct Nodo{
int dato;
Nodo *siguiente;
}


TIPOS DE LISTAS ENLAZADAS:

1.-Lista simplemente enlazada.
Cada nodo contiene un unico enlace que conecta ese nodo al siguiente o al anterior
La lista es eficiente en recorrdido directo.

2.-Lista doblemenete enlazada.
Cada nodo contiene dos enlaces, uno al nodo predecesor y el otro a su nodo sucesor.
La lista es eficiente tanto en recorrido directo como en recorrdido inverso.

3.-Lista circular simplemente enlazada.
Una lista enlzada simplemente en la que el ultimo elemento , se enlaza al primer elemento 
de tal modo que la lista puede ser recorrida de modo circular .

4.-Lista circular doblemente enlazada.
Es una lista doblemente enlazada en la que el ultimo elemento se enlaza al primer elemento y viceversa.
Esta lista se puede recorrer de modo circular tanto en direccion directa como inversa.

*/