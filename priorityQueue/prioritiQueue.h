#ifndef PRIORITIQUEUE_H
#define PRIORITIQUEUE_H
#include "Node.h"

template <typename T>
class PrioritiQueue {
    private:
        Node<T>* head;
        unsigned int count;
    public:
    PrioritiQueue(): head(nullptr), count(0) {}
    ~PrioritiQueue(){
        while(head) {
            Node<T>* temp = head;
            head = head->getNext();
            delete temp;
        }
        count = 0;
    }
    void enQue(const T& value, int priority);
    T deQueue();
    T peek() const;
    bool isEmpty() const;
    int size() const;
    void print() const;
};

#include "prioritiQueue.tpp"
#endif //PRIORITIQUEUE_H