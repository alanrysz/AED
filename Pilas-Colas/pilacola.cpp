#include <iostream>
#include <stdlib.h>

struct Nodo{

int dato;
Nodo *siguiente;

//Prototipos

void push(Nodo *&, int);
void pop(Nodo *&, int &)
};

int main(){

Nodo *pila = NULL;

char rpta;
int opc1, opc2, opc3, n;

cout << "Elige el metodo a utilizar";

cout << "1.Push/Pop \n2.Enqueue/Dequeue\n3.Salir";

cin >> opc1;

switch( opc != 3){


case 1: 
	cout << "Elige la accion a realizar: ";
	cin >> opc2;
	cout << "1.Push\n2.Pop\n3.Mostrar\n4.Vaciar Pila\n5.Volver al menu principal..";

	if (opc2 ==1){
		do{
			cout << "Digite un numero: ";
			cin >>
			push(pila, n);
			cout << "¿Desea agregar otro elemento a la pila? (s/n)";
		}while((rpta == 's') || (rpta == 'S'));
	}
	elseif(opc2 == 2)
		do{
			pop(pila, n);
			cout << "Se saco el elemento " << n << " de la PILA";
			cout << "¿Desea sacar otro elemento de la pila? (s/n);
		if((pila != NULL))
			while((rpta == 's') || (rpta == 'S'));
		else
			cout << "La pila se encuentra vacia";
	}
	elseif(opc2 == 3){
	if (pila == NULL)
		cout <<"No hay elementos en la PILA";
	else{
	pilaaux == pila;
	cout << "Los datos de la pila son: " << endl;
	while(pilaaux !=NULL)
		cout << pilaaux->n;

	}
	}
	elseif(opc2 == 4){
		while( pila != NULL){
			pop(pila,n);
			if( pila != NULL)
				cout << n << ",";
			else
				cout << n << "."; 
		}
	}		