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
cout << "Edad del animal: " << q->edad << endl << "Nombre de la bestia: " << q->nombre << endl;
q->edad=2;
cout << "Edad del animal: " << q->edad << endl << "Nombre de la bestia: " << q->nombre << endl;

} 