
# Pilas

Una pila (stack) es una estructura de datos, que consta de una serie de datos, en la cual las inserciones y eliminaciones se hacen por un extremo, llamado cima (top), de la pila. La estructura pila se conoce como LIFO (last-in, first-out, último en entrar, primero en salir), que significa “último elemento introducido, primero sacado”.

# Colas

Una cola es una estructura de datos, caracterizada por ser una secuencia de elementos en la que la operacion de inserción se realiza por un extremo y la extraccíon por el otro. Son conocidas por tener una estructura FIFO (First input first output).
Ejemplo:
+ Cola de impresión

# Operaciones basicas
Las operaciones usuales en las colas son Encolar y Desencolar (Enqueue y Dequeue).
La operacion Enqueue añade un elemento por el extremo final de la cola, y la operacion Dequeue elimina o extrae un elemento por el extremo opuesto.

# Listas

## Version contigua
```  
  struct Lista{
    int pos;
    array <int, N> datos;
  }
  
  bool insert(Lista &ls, unsigned &pos, double &val)
{
    if (ls.ocup == N)
        return false;
    if (pos > ls.ocup)
        return false;
    for (unsigned i = ls.ocup + 1; i > pos; i--)
        ls.var.at(i) = ls.var.at(i - 1);
    ls.var.at(pos) = val;
    ls.ocup += 1;
    return true;
}

bool remove(Lista &ls, unsigned &pos)
{
    if (ls.ocup == 0)
        return false;
    for (unsigned i = pos; i < ls.ocup; i++)
        ls.var.at(i) = ls.var.at(i + 1);
    ls.ocup -= 1;
    return true;
}
```
## Version enlazada
```
struct Lista{
   Nodo *first;
  }
  
  struct Nodo{
    int dato;
    Nodo *next;
  }
  
  
  //con template
  
  typedef struct nodo *Tlista;

void insertarInicio(Tlista &lista, int valor){
  Tlista q;
  q = new(struct Nodo);
  q.dato = valor;
  q.siguiente = lista;
  lista = q;
}
void eliminarElemento(Tlista &lista, int valor){
 Tlista p, ant;
 p = lista;
  
  if (lista != NULL){
    while (p != NULL){
      if (p.dato == valor){
      if (p == lista)
        lista = lista.siguiente;
      else
        ant.siguiente = p.siguiente;
      
      delete(p);
      return;
    }
    ant = p;
    p = p.siguiente;
  }
}
  else
    cout<<"Lista vacia"<<endl;
  
}
```
