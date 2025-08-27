/*  Un puntero es una variable que almacena la dirección en memoria donde recide otro objeto.
    Por ejemplo, en un programa extenso que relacione partes de la memoria muy alejadas es complicado 
    que no solucionaria un array pues este requiere que los elementos esten almacenados contiguamente.
    Es mejor almacer cada elemento en una pieza de memoria separada que se asigna mientras el programa se ejecuta, 
    junto con cada objeto hay un enlace al siguiente. Ese enlace es una variable de puntero.

    Algunas operaciones con punteros:
    - Declaracion: tipo *nombre;  //tipo puede ser cualquier tipo de dato valido
    - Asignacion: nombre = &var;  //&var es la direccion de memoria de var
    - Acceso al valor apuntado: *nombre; //devuelve el valor almacenado en la direccion de memoria a la que apunta nombre
    - Direccion del puntero: &nombre; //devuelve la direccion de memoria del puntero
    - Puntero nulo: nullptr; //indica que el puntero no apunta a ninguna direccion de memoria valida
    - Puntero a void: void *nombre; //puntero que puede apuntar a cualquier tipo de dato
    - Puntero constante: tipo * const nombre; //puntero que no puede cambiar la direccion de memoria a la que apunta
    - Puntero a constante: const tipo *nombre; //puntero que no puede modificar el valor al que apunta


*/

#include <iostream>
#define MIN(a,b) ((a)<(b)?(a):(b)) //un macro, y una forma alternativa de un if statement. El valor de verdad de lo que esta antes de ? es evaluado
                                   // si es true se devuelve lo que esta entre ? y :, si es false se devuelve lo que esta despues de :
using namespace std;

int main(){
int *puntero = nullptr; //puntero a entero inicializado a nulo
int x = 10;
puntero = &x; //& le asigna al puntero la direccion de memoria de x   
cout << *puntero << endl;; // valor al que apunta el puntero
cout << puntero << endl; // direccion de memoria de x
cout << &puntero << endl; // direccion de memoria del puntero
cout << &x << endl; // direccion de memoria de x


cout << MIN(5,10) << endl; // uso del macro
return 0;

}

