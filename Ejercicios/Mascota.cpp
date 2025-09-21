#include <iostream>
using namespace std;

class mascota{
public: 
    int edad;
    string nombre;
};

int main(){

mascota hamster;
hamster.edad =15;
hamster.nombre = "juan";
mascota* q = &hamster;
cout << q->edad << endl << q->nombre << endl;
q->edad=2;
cout << q->edad << endl << q->nombre << endl;

}