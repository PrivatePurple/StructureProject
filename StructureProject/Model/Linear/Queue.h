//
//  Queue.h
//  StructureProject
//
//  Created by Davis, Keenan on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include "LinkedList.h"

#include <iostream>
using namespace std;

template <class Type>
class Queue : public LinkedList<Type>
{
public:
    Queue();
    ~Queue();
    
    //Queue methods
    void enqueue(Type data);
    Type dequeue();
    Type peek();
    void clear();
    
    //overriden LinkedList methods
    void add(Type data);
    void addAtIndex(int index, Type data);
    Type getFromIndex(int index);
    Type remove(int index);
};

template <class Type>
Queue<Type> :: Queue() : LinkedList<Type>()
{
    //Wow! Look! Nothing!
}

#endif /* Queue_h */
