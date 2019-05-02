/*
  Tipos de datos
  AMR
  01/05/2019
*/
  
#include <iostream>
#include <cassert>
#include <assert.h>
#include <string.h>

using namespace std;

int main(){
    
    int a = 4;
    int b = 3;
    char c = '1';
    double d = 2.0;
    double e = 1.3;
    string f="Correcta";
    unsigned int g = 4;
 
    
    g += 2;
    b += a;
    d -= e;
    
    assert(b==7);
    assert(d==0.7);
    assert(g ==6);
    bool test=true;
    
    
    cout << "Como leemos esto la prueba " << c << " se realizo de forma " << f << " y test tiene el valor " << test;
    }
