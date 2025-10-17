#pragma once
#include "Node.h"
#include "PrioritiQueue.h"
#include <iostream>
using namespace std;

template <typename T>
void PrioritiQueue<T> :: enQue(const T& value, int priority){
    Node<T>* newNode = new Node(value, priority);
    if (!head || priority > head ->getPriority()) {
        newNode->setNext(head);
        head = newNode;
    } else{
        Node<T>* current = head;
        while (current -> getNext() && current->getNext() ->getPriority() >= priority) {
            current = current->getNext();
            
        }

        newNode->setNext(current->getNext());
            current->setNext(newNode);
    }

    count ++;


}

template <typename T>
T PrioritiQueue<T> :: deQueue() {
    T returnValue;
    if (isEmpty()) {
        cout << "Empty Queue"<<endl;
    } else {
        Node<T>* temp = head;
        head = temp->getNext();
        returnValue = temp->getData();
        delete temp;
        --count;
        return returnValue;
    }
    return returnValue;

}

template <typename T>
T PrioritiQueue<T> :: peek() const{
    T returnValue;
    if(isEmpty()) {
        cout << "Empty Queue" << endl;
    } else {
        returnValue = head->getData();
    }

    return returnValue;

}

template <typename T>
bool PrioritiQueue<T>::isEmpty() const {
    return count == 0;
}

template <typename T>
int PrioritiQueue<T>::size() const {
    return count;
}

template <typename T>
void PrioritiQueue<T>::print() const {
    if (isEmpty()) {
        cout << "Lista Vacia!" << endl;
    } else {
        const Node<T>* current = head;
        cout << "[";
        while (current) {
            cout << " " << current->getData() << " prio: " << current->getPriority() << " -> ";
            current = current->getNext();
        }
        cout << "]" << endl;
    }
}