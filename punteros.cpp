/*  Un puntero es una variable que almacena la dirección en memoria donde recide otro objeto.
    Por ejemplo, en un programa extenso que relacione partes de la memoria muy alejadas es complicado 
    que no solucionaria un array pues este requiere que los elementos esten almacenados contiguamente.
    Es mejor almacer cada elemento en una pieza de memoria separada que se asigna mientras el programa se ejecuta, 
    junto con cada objeto hay un enlace al siguiente. Ese enlace es una variable de puntero.

*/

#include <iostream>
using namespace std;

int main(){
int *puntero = nullptr; //puntero a entero inicializado a nulo
int x = 10;
puntero = &x; //& le asigna al puntero la direccion de memoria de x   
cout << *puntero << endl;; // valor al que apunta el puntero
cout << puntero << endl; // direccion de memoria de x
cout << &puntero << endl; // direccion de memoria del puntero
cout << &x << endl; // direccion de memoria de x

return 0;

}