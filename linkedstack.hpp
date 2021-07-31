#ifndef LINKEDSTACK_HPP
#define LINKEDSTACK_HPP

#include <iostream>

template<typename T>
struct Node {
    T value;
    Node* prev;
    Node* next;
};

template<typename T>
class LinkedStack {
    friend std::ostream& operator<<(std::ostream& out, const LinkedStack<T>& linkedstack) {
        for (Node<T>* temp = linkedstack.front; temp != nullptr; temp = temp->prev)
            out << temp->value << " ";
        return out;
    }

private:
    Node<T>* front;
    T undefined;
    int size_n;

public:
    LinkedStack() : front(nullptr), undefined(T()), size_n(0) {};
    LinkedStack(T undefined) : front(nullptr), undefined(undefined), size_n(0) {};

    ~LinkedStack() {
        Node<T>* toDelete = front;
        Node<T>* next = nullptr;
        while (size_n > 0) {
            next = toDelete->prev;
            delete toDelete;
            toDelete = next;
            size_n--;
        }
    }

    int empty() {
        if (size_n == 0)
            return 1;
        return 0;
    }

    T peek() {
        if (size_n > 0)
            return front->value;
        return undefined;
    }

    T pop() {
        if (size_n == 1) {
            T value = front->value;
            delete front;
            front = nullptr;
            size_n--;
            return value;
        }
        else if (size_n > 1) {
            T value = front->value;
            Node<T>* newFront = front->prev;
            newFront->next = nullptr;
            delete front;
            front = newFront;
            size_n--;
            return value;
        }
        return undefined;
    }

    int size() {
        return size_n;
    }

    void push(T x) {
        Node<T>* newNode = new Node<T>;
        newNode->value = x;
        newNode->prev = nullptr;
        newNode->next = nullptr;
                
        if (front == nullptr) {
            front = newNode;
        }
        else {
            newNode->prev = front;
            front->next = newNode;
            front = newNode;
        }
        size_n++;
    }
};

#endif