/*
* C++ - Pilas-Colas
* Copyright 2020 Rysznivkier, Alan
* Description : Operaciaciones de pilas y colas
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{

int dato;
Nodo *siguiente;
	
};
//Prototipos

void push(Nodo *&, int);
void pop(Nodo *&, int &);
void enqueue(Nodo *&, Nodo *&, int);
void dequeue(Nodo *&, Nodo *&, int&);
bool colaVacia(Nodo *);
void mostrarElementos(Nodo *&);


int main(){

Nodo *pila = NULL;
Nodo *frente = NULL;
Nodo *fin = NULL;
	
char rpta;
int opc1, opc2, opc3, n;

do{
cout << "\n1.Push/Pop \n2.Enqueue/Dequeue\n3.Salir\n\n";
cout << "Elige el metodo a utilizar: ";
cin >> opc1;

switch(opc1){

case 1: 
	do{
   		cout << "1.Push\n2.Pop\n3.Mostrar\n4.Vaciar Pila\n5.Volver al menu principal..\n\n";
		cout << "Elige la accion a realizar: ";
        cin >> opc2;
    	
		if (opc2 ==1){
			do{
                cout << "Digite un numero: ";
	            cin >> n;
				push(pila, n);
				cout << "¿Desea agregar otro elemento a la pila? (s/n)\n";
                cin >> rpta;
			}while((rpta == 's') ||  (rpta == 'S'));
		}
		else if(opc2 == 2) //verificar 
       		do{
                if((pila != NULL)){
				    pop(pila, n);
				    cout << "¿Desea sacar otro elemento de la pila? (s/n)";
                    cin >> rpta;
                    }
                }while((rpta == 's') || (rpta == 'S'));

		else if(opc2 == 3){
		if (pila == NULL)
			cout <<"No hay elementos en la PILA";
        mostrarElementos(pila);
        }
            
		else if(opc2 == 4){
            if (pila != NULL){
			while( pila != NULL){
				pop(pila,n);
				if( pila != NULL)
					cout << n << ",";
				else
					cout << n << ".\n\n";
			}
            }
            else
                cout << "\nLa pila esta vacia!\n\n";            
        }
	}while(opc2 != 5);		
break;

case 2:
	cout << "Elige la accion a realizar: ";
	cin >> opc3;
	cout << "1.Enqueue\n2.Dequeue\n3.Mostrar\n4.Volver al menu principal..";

break;

case 3:
	
break;

default: 
    cout << "Usted a seleccionado una opcion incorrecta";
break;
}
}while(opc1 != 3);
return 0;
}


void push(Nodo *&pila, int n){

	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo -> dato = n;
	nuevo_nodo -> siguiente = pila;
	pila = nuevo_nodo;


	cout << "\nElemento " << n << " agregado a la PILA correctamente.\n";
}

void pop(Nodo *&pila, int &n){

	Nodo *aux = pila;
	n = aux -> dato;
	pila = aux -> siguiente;
	delete aux;
}

void enqueue(Nodo *&frente, Nodo *&fin, int n){

	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo -> dato = n;
	nuevo_nodo -> siguiente;
	
	if(colaVacia(frente)){
	
	}

}

bool colaVacia(Nodo *frente){
	return (frente == NULL)? true: false;
}

void mostrarElementos(Nodo *&pila){

    Nodo *aux = pila; //apunta al inicio de la lista

    while (aux != NULL){
        cout << "\t" << aux -> dato <<endl;
        aux = aux ->siguiente;
    }
}
