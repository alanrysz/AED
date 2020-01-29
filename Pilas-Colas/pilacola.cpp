/*
* C++ - Pilas-Colas
* Copyright 2020 Rysznivkier, Alan
* Description : Operaciaciones de pilas y colas
*/

//Prototipos
void menu();
void push(Nodo *&, int);
void pop(Nodo *&, int &);
void enqueue(Nodo *&, Nodo *&, int);
void dequeue(Nodo *&, Nodo *&, int&);
bool colaVacia(Nodo *);
void mostrarElementos(Nodo *&);

int main(){

menu();

return 0;

}
