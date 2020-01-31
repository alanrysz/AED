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
void menu();
void push(Nodo *&, int);
void pop(Nodo *&, int &);
void enqueue(Nodo *&, Nodo *&, int);
void dequeue(Nodo *&, Nodo *&, int&);
bool colaVacia(Nodo *);
void mostrarElementos(Nodo *&);
void mostrarElementosCola(Nodo *&);

int main(){

menu();

return 0;

}



//Funcion con las operaciones del menu
void menu(){
	
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
system("cls"); //limpiar pantalla

	do{
   		cout << "\n1.Push\n2.Pop\n3.Mostrar\n4.Vaciar Pila\n5.Volver al menu principal..\n\n";
		cout << "Elige la accion a realizar: ";
       	cin >> opc2;
    	
		//push
		if (opc2 == 1){
			do{
                cout << "\nDigite un numero: ";
	            cin >> n;
				push(pila, n);

				cout << "¿Desea agregar otro elemento a la pila? (s/n)\n";
                cin >> rpta;
			}while((rpta == 's') ||  (rpta == 'S'));
		}
		
		//pop
		else if(opc2 == 2){
			if((pila != NULL)){
       			do{
				    pop(pila, n);
				    cout << "¿Desea sacar otro elemento de la pila? (s/n)";
                    cin >> rpta;
                }while(((rpta == 's') || (rpta == 'S')) && pila !=NULL);
			}
			cout << "\nLa PILA se encuentra vacia.\n";
		}

		//mostrarElementos
		else if(opc2 == 3){
			if (pila == NULL)
				cout <<"\nNo hay elementos en la PILA\n";
        	mostrarElementos(pila);
		}
            
		//vaciar toda la pila
		else if(opc2 == 4){
            		if (pila != NULL){
				while( pila != NULL)
					pop(pila,n);
            	}
            else
                cout << "\nLa pila esta vacia!\n\n";            
        }
		
	//volver al menu principal
	}while(opc2 != 5);
		system("cls");	
	break;

case 2:
	system("cls"); //limpiar pantalla
	do{
		cout << "1.Enqueue\n2.Dequeue\n3.Mostrar\n4.Vaciar Cola\n5.Volver al menu principal..\n\n";
		cout << "Elige la accion a realizar: ";
		cin >> opc3;
	
		//enqueue
		if(opc3 == 1){
			cout << "Agregando elementos a la cola\n\n";
			
			do{
                	cout << "Digite un numero: ";
	            	cin >> n;
			
					enqueue(frente, fin, n);
					cout << "¿Desea agregar otro elemento a la COLA? (s/n)\n";
                	cin >> rpta;
				}while((rpta == 's') ||  (rpta == 'S'));
		
		}
	
	
		//dequeue
		else if (opc3 ==2){
			cout << "\nQuitando los elementos de la cola.. \n\n";
			
			if((fin == NULL))
				cout << "\n La cola esta vacia!\n\n";
			else{
				do{
					dequeue(frente, fin, n);
					cout << "¿Desea sacar otro elemento de la COLA? (s/n)";
 		    	    cin >> rpta;
        		}while( ( (rpta == 's') || (rpta == 'S') ) && ( (frente != NULL)  ));
			}
		}
	
		//mostrarCola
		else if(opc3 == 3){
			//verificar
				if(frente == NULL)
					cout << "\nLa COLA esta vacia!\n\n";
				mostrarElementosCola(frente);
		}
	//vaciar cola
		else if (opc3 == 4){
			if (frente == NULL)
				cout << "\nLa cola esta vacia!\n\n";
			else{
					while(frente != NULL)
						dequeue(frente, fin, n);
				}
		}
	
	//volver al menu principal
	
		}while(opc3 != 5);
			system("cls");

break;


//salir del programa
case 3:
	break;

default: 
    cout << "\nUsted a seleccionado una opcion incorrecta\n";
}
}while(opc1 != 3);
}


void push(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo -> dato = n;
	nuevo_nodo -> siguiente = pila;
	pila = nuevo_nodo;

	cout << "\tElemento " << n << " agregado a la PILA correctamente.\n\n";
}
void pop(Nodo *&pila, int &n){
	Nodo *aux = pila;
	n = aux -> dato;
	pila = aux -> siguiente;
	delete aux;

	cout << "\tElemento " << n << " fue sacado de la PILA correctamente. \n\n";
}
void enqueue(Nodo *&frente, Nodo *&fin, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo -> dato = n;
	nuevo_nodo -> siguiente;
	
	if(colaVacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin -> siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
	
	cout << "\tElemento " << n << " insertado a COLA correctamente! \n\n";
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

void mostrarElementosCola(Nodo *&frente){

	Nodo *aux1 = frente;
	

	while (aux1 != NULL){
        cout << "\t" << aux1 -> dato <<endl;
        aux1 = aux1 ->siguiente;
	}
}

void dequeue(Nodo *&frente, Nodo *&fin, int &n){
	
	n = frente -> dato;
	Nodo *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
	else
	frente = frente -> siguiente;
	
	delete aux;	

	cout << "\nSe removio el elemento " << n << " de la cola\n";
}
