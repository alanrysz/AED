/*
03-Celsius
Conversor de Farenheit a Celsius
Alan Rysznivkier
30/05/2019
*/

#include <iostream>
#include <assert.h>

using namespace std;

//Prototipos
double Celsius(double);
bool AreNear(double, double, double = 0.001);

int main(){

double Farenheit,
       a,
       b,
       c;

assert(0 == Celsius(32));
assert(5 == Celsius(41));

cout << "Indicar en Farenheit: ";
cin >> Farenheit;
cout << "La temperatura en celsius es: " << Celsius(Farenheit) << endl;
AreNear ? cout << "Sí" : cout << "No";

}

double Celsius(double x){

return (5.0/9.0)*(x-32.0); //Con colocar solo una coma en uno de los números que se encuentra en la operacion es suficiente

}

bool AreNear(double a, double b, double c) {

return (a - c)  <= b and b <= (a + c);
}
