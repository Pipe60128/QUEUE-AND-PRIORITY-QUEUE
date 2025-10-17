#include "Node.h"
#pragma once

template <typename T>
T Node<T>::getData() const {
    return data;
}

template <typename T>
int Node<T>::getPriority() const {
    return priority;
}

template <typename T>
Node<T>* Node<T>::getNext() const {
    return next;
}

template <typename T>
void Node<T>::setNext(Node<T>* n) {
    next = n;
}