#include <iostream>
using namespace std;

#define ECHO(x) #x << ": " << (x)

int main (){

cout << ECHO(a) << ECHO (b) << ECHO (a+b) << endl;
cout << ECHO(sum) << ECHO(sum <<2) << endl;

}