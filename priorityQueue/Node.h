#ifndef NODE_H
#define NODE_H

template<typename T>
class Node{
private:
    T data;
    int priority;
    Node<T>* next;
public:
    Node(const T& val, int priority): data(val), priority(priority), next(nullptr) {}
    T getData() const;
    int getPriority() const;
    Node* getNext() const;
    void setNext(Node* n);
    ~Node() = default;
};

#include "Node.tpp"
#endif //NODE_H