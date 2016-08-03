//
//  TestCircularlyLinkedList.cpp
//  DataStructuresAlgorithmsCpp
//
//  Created by Nicholas Ruta on 8/2/16.
//
/*
A circularly linked list has the same kind of nodes as a singly linked list. It includes nodes that are linked into a cycle as opposed to having a head or tail. It includes a special node, called a cursor, that allows us to have a place to start form if we ever need to traverse the circularly linked list. 
*/

#include <stdio.h>
#include <iostream>

using std::cout;
using std::endl;

typedef std::string Elem;				// element type
class CircularlyLinkedListNode {					// circularly linked list node
private:
    Elem elem;					// linked list element value
    CircularlyLinkedListNode* next;				// next item in the list
    
    friend class CircularlyLinkedList;			// provide CircularlyLinkedList access
};

class CircularlyLinkedList {				// a circularly linked list
public:
    CircularlyLinkedList();				// constructor
    ~CircularlyLinkedList();				// destructor
    bool empty() const;				// is list empty?
    const Elem& front() const;			// element at cursor
    const Elem& back() const;			// element following cursor
    void advance();				// advance cursor
    void add(const Elem& e);			// add after cursor
    void remove();				// remove node after cursor
private:
    CircularlyLinkedListNode* cursor;				// the cursor
};

CircularlyLinkedList::CircularlyLinkedList()			// constructor
: cursor(NULL) { }
CircularlyLinkedList::~CircularlyLinkedList()			// destructor
{ while (!empty()) remove(); }

bool CircularlyLinkedList::empty() const		// is list empty?
{ return cursor == NULL; }
const Elem& CircularlyLinkedList::back() const		// element at cursor
{ return cursor->elem; }
const Elem& CircularlyLinkedList::front() const		// element following cursor
{ return cursor->next->elem; }
void CircularlyLinkedList::advance()			// advance cursor
{ cursor = cursor->next; }

void CircularlyLinkedList::add(const Elem& e) {		// add after cursor
    CircularlyLinkedListNode* v = new CircularlyLinkedListNode;			// create a new node
    v->elem = e;
    if (cursor == NULL) {			// list is empty?
        v->next = v;				// v points to itself
        cursor = v;				// cursor points to v
    }
    else {					// list is nonempty?
        v->next = cursor->next;			// link in v after cursor
        cursor->next = v;
    }
}

void CircularlyLinkedList::remove() {			// remove node after cursor
    CircularlyLinkedListNode* old = cursor->next;			// the node being removed
    if (old == cursor) 				// removing the only node?
        cursor = NULL;				// list is now empty
    else
        cursor->next = old->next;			// link out the old node
    delete old;					// delete the old node
}

// test the singly linked list and print object type
int main() {

    // list of strings
    CircularlyLinkedList a;
    a.add("FirstLink");

    // list of strings
    CircularlyLinkedList b;
    b.add("AnotherFirstLink");

    cout << typeid(a).name() << endl;

    // successful execution
    return EXIT_SUCCESS;
}