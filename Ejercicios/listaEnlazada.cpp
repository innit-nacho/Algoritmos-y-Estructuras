#include <iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo* siguiente;
};
void insertaAlFinal(Nodo** cabeza, int valor){

Nodo* nuevo = new Nodo;
nuevo->dato = valor;
nuevo->siguiente = *cabeza;
*cabeza = nuevo;
cabeza = &(*cabeza);
}
void mostrarLista(Nodo* cabeza){
    cout << "Elementos de la lista: ";
while(cabeza!=nullptr){
    cout << cabeza->dato<<" -> ";
    cabeza = cabeza->siguiente;
}
cout <<"null"<<endl;
}


int main(){

Nodo* cabeza = nullptr;
Nodo** ptr1 = &cabeza;
insertaAlFinal(ptr1,2);
insertaAlFinal(ptr1,3);
insertaAlFinal(ptr1,4);
 mostrarLista(cabeza);


}