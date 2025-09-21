/*
La estructura del stack permite la ejeecicion de funsiones dentro de su propio contexto, 
por lo que no es conveniente usar variables globales






#include <iostream>

using namespace std;




int contadorChar(string a){

string a1 = "yendo";
if(a == "" ) //caso base , limte recursivo 
{return 0;}
else {
     return  1 + contadorChar(a.substr(1));
    }
}

int main(){

string a = "allo";
cout << contadorChar(a)<<endl;;

}

*/

#include <iostream>
using namespace std;



int suma(int arr[], int n){
    int suma = 0;
    if(n == 0){ //caso base
        return 0;
    } else {
      return arr[n-1] + suma(arr, n-1);
    }
}

int main(){
 array[5] = {1,2,3,4,5};
 cout << suma(array, 5) << endl;

}