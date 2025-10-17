#include <iostream>
#include "prioritiQueue.h"
using namespace std;

int main() {
    cout<<"Priority queue....."<<endl;
    PrioritiQueue<string> pq;
    pq.enQue("Tarea baja", 1);
    pq.enQue("Tarea media", 5); 
    pq.enQue("Tarea alta", 10);
    pq.enQue("Tarea muy alta", 15);
    pq.print();
    cout << "Desencolando de la cola de prioridad: " << pq.deQueue() << endl;
    pq.print();
    cout << "Elemento al frente sin eliminar: " << pq.peek() << endl;
    pq.print();
    cout << "¿La cola de prioridad está vacía?: " << (pq.isEmpty() ? "Sí" : "No") << endl;
    cout << "Tamaño de la cola de prioridad: " << pq.size() << endl;
    

    return 0;
}