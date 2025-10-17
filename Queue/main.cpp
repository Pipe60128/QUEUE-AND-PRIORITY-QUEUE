#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    Queue<int> q; 
    cout << "\nEncolando elementos...\n";
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.enQueue(40);

    cout << "Contenido actual de la cola: ";
    q.print(); 

    cout << "\nDesencolando un elemento..." << endl;
    int valor = q.deQueue();
    cout << "Se eliminó: " << valor << endl;

    cout << "Cola después de eliminar uno: ";
    q.print(); 
    q.enQueue(50);
    cout << "\nDespués de agregar 50: ";
    q.print(); 
    
    cout << "\nLimpiando la cola..." << endl;
    q.clear();

    cout << "¿La cola está vacía?: " << (q.isEmpty() ? "Sí" : "No") << endl;

    return 0;
}