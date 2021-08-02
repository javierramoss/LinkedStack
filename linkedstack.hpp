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
        for (Node<T>* temp = linkedstack._top; temp != nullptr; temp = temp->prev)
            out << temp->value << " ";
        return out;
    }

private:
    Node<T>* _top;
    T undefined;
    int _size;

public:
    LinkedStack() : _top(nullptr), undefined(T()), _size(0) {};
    LinkedStack(T undefined) : _top(nullptr), undefined(undefined), _size(0) {};

    ~LinkedStack() {
        Node<T>* toDelete = _top;
        Node<T>* next = nullptr;
        while (_size > 0) {
            next = toDelete->prev;
            delete toDelete;
            toDelete = next;
            _size--;
        }
    }

    int empty() {
        if (_size == 0)
            return 1;
        return 0;
    }

    T top() {
        if (_size > 0)
            return _top->value;
        return undefined;
    }

    T pop() {
        if (_size == 1) {
            T value = _top->value;
            delete _top;
            _top = nullptr;
            _size--;
            return value;
        }
        else if (_size > 1) {
            T value = _top->value;
            Node<T>* newFront = _top->prev;
            newFront->next = nullptr;
            delete _top;
            _top = newFront;
            _size--;
            return value;
        }
        return undefined;
    }

    int size() {
        return _size;
    }

    void push(T x) {
        Node<T>* newNode = new Node<T>;
        newNode->value = x;
        newNode->prev = nullptr;
        newNode->next = nullptr;
                
        if (_top == nullptr) {
            _top = newNode;
        }
        else {
            newNode->prev = _top;
            _top->next = newNode;
            _top = newNode;
        }
        _size++;
    }
};

#endif