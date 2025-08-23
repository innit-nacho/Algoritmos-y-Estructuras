#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;


int main(){

string numero;
int decimal=0;
cout << "Introduce un numero: ";
cin >> numero;

for( int i=0; i <= numero.size(); i++){

    switch(numero[i]){

        case '0':
            decimal = decimal + 0*(pow(16,numero.size()-i-1));
             break; 
        case '1':
             decimal = decimal + 1*(pow(16,numero.size()-i-1));
             break; 
        case '2':
             decimal = decimal + 2*(pow(16,numero.size()-i-1));
             break; 
        case '3':
             decimal = decimal + 3*(pow(16,numero.size()-i-1));
             break; 
        case '4':
             decimal = decimal + 4*(pow(16,numero.size()-i-1));
            break; 
        case '5':
            decimal = decimal + 5*(pow(16,numero.size()-i-1));
            break; 
        case '6':
            decimal = decimal + 6*(pow(16,numero.size()-i-1));
            break; 
        case '7':
            decimal = decimal + 7*(pow(16,numero.size()-i-1));
            break; 
        case '8':
            decimal = decimal + 8*(pow(16,numero.size()-i-1));
            break; 
        case '9':
            decimal = decimal + 9*(pow(16,numero.size()-i-1));
            break; 
        case 'A':
            decimal = decimal + 10*(pow(16,numero.size()-i-1));
            break; 
        case 'B':
            decimal = decimal + 11*(pow(16,numero.size()-i-1));
            break; 
        case 'C':
            decimal = decimal + 12*(pow(16,numero.size()-i-1));
            break; 
        case 'D':
            decimal = decimal + 13*(pow(16,numero.size()-i-1));
            break; 
        case 'E':
            decimal = decimal + 14*(pow(16,numero.size()-i-1));
            break; 
        case 'F':
            decimal = decimal + 15*(pow(16,numero.size()-i-1));
            break;  

    }

}
 cout << "El numero ingresado en decimal es " << decimal << endl; 

return 0;
}