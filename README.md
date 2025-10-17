# 🧮 C++ Queue & Priority Queue

Implementación en C++ de una **cola (Queue)** y una **cola con prioridad (Priority Queue)** utilizando plantillas (`templates`) y nodos enlazados dinámicamente.  
Este proyecto muestra el funcionamiento básico de estructuras lineales basadas en listas, aplicando conceptos de memoria dinámica, punteros y estructuras genéricas.

---

## 🧩 Características principales

### 📘 Queue (Cola)
- Inserción de elementos al final (`enQueue`)
- Eliminación del primer elemento (`deQueue`)
- Verificación de si está vacía (`isEmpty`)
- Impresión del contenido (`print`)
- Limpieza completa de la cola (`clear`)

### 🔝 Priority Queue (Cola con prioridad)
- Inserción ordenada por prioridad (`enQue`)
- Eliminación del elemento con mayor prioridad (`deQueue`)
- Consulta del elemento con mayor prioridad sin eliminarlo (`peek`)
- Verificación de si está vacía (`isEmpty`)
- Tamaño de la cola (`size`)
- Impresión de la lista con sus prioridades (`print`)

---

## 🧱 Estructura del proyecto
📂 queue-project/
│
├── 📄 Node.h
│ ├── Define la clase Node<T>
│ ├── Atributos:
│ │ ├── T data — valor almacenado
│ │ ├── int priority — prioridad (para PriorityQueue)
│ │ └── Node<T>* next — puntero al siguiente nodo
│ └── Métodos:
│ ├── getData(), getPriority()
│ ├── getNext(), setNext()
│ └── Constructor con o sin prioridad
│
├── 📄 Node.cpp
│ └── Implementa los métodos definidos en Node.h
│
├── 📄 Queue.h
│ ├── Define la clase Queue<T>
│ ├── Atributos:
│ │ ├── Node<T>* topNode — inicio de la cola
│ │ ├── Node<T>* tailNode — fin de la cola
│ │ └── int count — cantidad de elementos
│ └── Métodos:
│ ├── enQueue(const T& v)
│ ├── deQueue()
│ ├── isEmpty()
│ ├── clear()
│ └── print()
│
├── 📄 Queue.cpp
│ └── Implementa los métodos de la clase Queue<T>
│
├── 📄 PriorityQueue.h
│ ├── Define la clase PriorityQueue<T>
│ ├── Atributos:
│ │ ├── Node<T>* head — inicio de la cola de prioridad
│ │ └── int count — cantidad de elementos
│ └── Métodos:
│ ├── enQue(const T& value, int priority)
│ ├── deQueue()
│ ├── peek()
│ ├── isEmpty()
│ ├── size()
│ └── print()
│
├── 📄 PriorityQueue.cpp
│ └── Implementa los métodos de la clase PriorityQueue<T>
│
├── 📄 main.cpp
│ ├── Incluye "Queue.h" y "PriorityQueue.h"
│ ├── Crea instancias de ambas colas
│ ├── Inserta y elimina elementos
│ └── Imprime resultados por consola
│
└── 📄 README.md
└── Documentación del proyecto
