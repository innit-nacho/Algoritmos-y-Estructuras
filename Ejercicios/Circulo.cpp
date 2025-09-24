#include <iostream>
#include <cmath>
using namespace std;

class Circulo{

public: 
Circulo() : radio(0.0) { 
    cout << "Constructor por defecto llamado" << endl;
}

Circulo(double r) : radio(r){
    cout << "Constructor con parametros llamado"<< endl;
}
~Circulo(){ cout << "chau circulo"<<endl;}

double area(){

return radio*M_PI;

}
double radio;

};

int main(){

Circulo* ptr1 = new Circulo();
ptr1->radio=15.0;
cout << "El radio del circulo es: "<< ptr1->area()<< endl;
delete ptr1;
return 0;
}