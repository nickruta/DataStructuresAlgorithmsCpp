//
//  TestSinglyLinkedList.cpp
//  DataStructuresAlgorithmsCpp
//
//  Created by Nicholas Ruta on 8/1/16.
//  Copyright © 2016 Nicholas Ruta. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;

// forward declaration to allow the compiler to recognize a friend declaration of SinglyLinkedList
template <class SinglyLinkedListNode > class SinglyLinkedList;

template <typename E> class SinglyLinkedListNode {
    
private:
    // linked list element value
    E elem;
    
    // next item in the list
    SinglyLinkedListNode<E>* next;
    
    // provide SinglyLinkedList access
    friend class SinglyLinkedList<E>;

};

// header file
template <typename E> class SinglyLinkedList {
public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    
    // is the list empty?
    bool empty() const;
    
    // return the front element
    const E& front() const;
    void addFront(const E& e);
    void removeFront();
private:
    // the head of the list
    SinglyLinkedListNode<E>* head;
};

// implementation of the above header file
template <typename E> SinglyLinkedList<E>::SinglyLinkedList() : head(NULL) { }

template <typename E> bool SinglyLinkedList<E>::empty() const

{ return head == NULL; }

// return front element
template <typename E> const E& SinglyLinkedList<E>::front() const
{ return head->elem; }


// destructor
template <typename E> SinglyLinkedList<E>::~SinglyLinkedList() { while (!empty()) removeFront(); }

// add to front of list
template <typename E> void SinglyLinkedList<E>::addFront(const E& e) {
    
    // create new node
    SinglyLinkedListNode<E>* v = new SinglyLinkedListNode<E>;
    
    // store data
    v->elem = e;
    
    // head now follows v
    v->next = head;
    
    // v is now the head
    head = v;
}

// remove front item
template <typename E> void SinglyLinkedList<E>::removeFront() {
    
    // save current head
    SinglyLinkedListNode<E>* old = head;
    
    // skip over old head
    head = old->next;
    
    // delete the old head
    delete old;
}

// test the singly linked list and print object type
int main() {

    // list of strings
    SinglyLinkedList<std::string> a;
    a.addFront("MSP");

    // list of integers
    SinglyLinkedList<int> b;
    b.addFront(13);
    
    cout << typeid(a).name() << endl;

    // successful execution
    return EXIT_SUCCESS;
}