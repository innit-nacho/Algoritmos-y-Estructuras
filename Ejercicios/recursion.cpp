#include <iostream>

using namespace std;




int contadorChar(string a){

string a1 = "yendo";
if(a == "" )
{return 0;}
else {
     return  1 + contadorChar(a.substr(1));
    }
}

int main(){

string a = "allo";
cout << contadorChar(a)<<endl;;

}