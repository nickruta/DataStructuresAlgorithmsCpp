//
//  TestDoublyLinkedList.cpp
//  DataStructuresAlgorithmsCpp
//
//  Created by Nicholas Ruta on 8/1/16.
//

#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;

// list element type
typedef std::string Elem;

class DoublyLinkedListNode {
private:
    Elem elem;                              // node element value
    DoublyLinkedListNode* prev;				// previous node in list
    DoublyLinkedListNode* next;				// next node in list
    friend class DoublyLinkedList;			// allow DoublyLinkedList access
};



class DoublyLinkedList {
public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    bool empty() const;                 // is the list empty?
    const Elem& front() const;			// get the front element
    const Elem& back() const;			// get the back element
    void addFront(const Elem& e);		// add to front of list
    void addBack(const Elem& e);		// add to back of list
    void removeFront();                 // remove from the front
    void removeBack();                  // remove from the back
private:
    // list sentinels (dummy nodes at the beginning/end that hold no element value)
    DoublyLinkedListNode* header;
    DoublyLinkedListNode* trailer;
protected:
    void add(DoublyLinkedListNode* v, const Elem& e);		// insert new node before v
    void remove(DoublyLinkedListNode* v);                   // remove node v
};




DoublyLinkedList::DoublyLinkedList() {              // constructor
    header = new DoublyLinkedListNode;				// create sentinels
    trailer = new DoublyLinkedListNode;
    header->next = trailer;                         // have them point to each other
    trailer->prev = header;
}


DoublyLinkedList::~DoublyLinkedList() {			// destructor
    while (!empty()) removeFront();             // remove all but sentinels
    delete header;                              // remove the sentinels
    delete trailer;
}

// insert new node before v
void DoublyLinkedList::add(DoublyLinkedListNode* v, const Elem& e) {
    // create a new node for e
    DoublyLinkedListNode* u = new DoublyLinkedListNode;
    u->elem = e;
    // link u in between v
    u->next = v;
    // ...and v->prev
    u->prev = v->prev;
    v->prev->next = v->prev = u;
}

void DoublyLinkedList::addFront(const Elem& e)	// add to front of list
{ add(header->next, e); }

void DoublyLinkedList::addBack(const Elem& e)	// add to back of list
{ add(trailer, e); }

// remove node v
void DoublyLinkedList::remove(DoublyLinkedListNode* v) {
    DoublyLinkedListNode* u = v->prev;				// predecessor
    DoublyLinkedListNode* w = v->next;				// successor
    u->next = w;                                    // unlink v from list
    w->prev = u;
    delete v;
}

void DoublyLinkedList::removeFront()		// remove from font
{ remove(header->next); }

void DoublyLinkedList::removeBack()		// remove from back
{ remove(trailer->prev); }


bool DoublyLinkedList::empty() const		// is list empty?
{ return (header->next == trailer); }

const Elem& DoublyLinkedList::front() const	// get front element
{ return header->next->elem; }

const Elem& DoublyLinkedList::back() const		// get back element
{ return trailer->prev->elem; }


// test the singly linked list and print object type
//int main() {
// 
//    // list of strings
//    DoublyLinkedList a;
//    a.addFront("FirstLink");
//    
//    // list of integers
//    DoublyLinkedList b;
//    b.addFront("AnotherFirstLink");
//    
//    cout << typeid(a).name() << endl;
//    
//    // successful execution
//    return EXIT_SUCCESS;
//}
