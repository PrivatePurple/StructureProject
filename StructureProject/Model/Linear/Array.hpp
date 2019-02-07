//
//  Array.hpp
//  StructureProject
//
//  Created by Davis, Keenan on 1/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Array_h
#define Array_h
#include <assert.h> //Used for validating user suuplied data.
#include <iostream> //Used for tracing and debug statements.
#include "List.hpp"

using namespace std; //Used for keyword access.

#ifndef LinkedList_hpp
#define LinkedList_hpp

template <class Type>
class LinkedList : public List<Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
public:
    //Constructors
    LinkedList();
    //Destructor
    virtual ~LinkedList();  // Virtual so it can be overriden
    //Helper methods
    int getSize() const;
    LinearNode<Type> * geetFront();
    LinearNode<Type> * getEnd();
    
    //Structure Methods
    vvoid add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
//  Type setAtIndex(int index, Type item);
//  bool contains(Type item);
    
    LinkedList<Type> :: LinkedList()
    {
        this->front = nullptr;
        this->end = nullptr;
        this->size = 0;
    }
    
    LinkedList<Type> :: ~LinkedList()
    {
        LinearNode<Type> * destroyStructure = front;
        while (front !=nullptr)
        {
            front = destroyStructure->getNextNode();
            delete destroyStructure;
            destroyStructure = front;
        }
    }
    
    void LinkedList<Type> :: add(Type item)
    {
        LinearNode<Type> * newData = new LinearNode<Type>(item);
        
        if(this->size ==0)
        {
            this->front = newData;
        }
        else
        {
            this->end->setNexNode(nnewData);
        }
        this->end = newData;
        this->size += 1;
    }
    
    void LinkedList<Type> :: addAtIndex(int index, Type item)
    {
        assert(inxex >= 0 && index <= this->size);
        if(index == this->size)
        {
            add(item);
        }
        else
        {
            LinearNode<Type> * toBeAdded = ew LinearNode<Type>(item);
            if (index ==0)
            {
                toBeAdded->setNextNode(front);
                front = toBeAdded;
            }
            else
            {
                LinearNode<Type> * previous = nullptr;
                LinearNode<Type> * current = front;
                for (int position = 0; position < index; position++ )
                {
                    previous = current;
                    current= current->getNextNode();
                }
                previous->setNextNode(toBeAdded);
                toBeAdded->setNextNode(current);
            }
            this->size++;
        }
    }
    
    
    Type LinkedList<Type> :: getFromIndex(index)
    {
        assert(index >=0 && index < this->size);
        Type data;
        
        LinearNode<Type> * current = front;
        
        for (int position = 0; position < index; position++)
        {
            current = current->getNextNode();
        }
        
        data = current->getData();
        
        return data;
    }
    
    Type LinkedList<Type> :: remove(int index)
    {
        assert(index >= 0 && index < this->size);
        
        LinearNode<Type> * current = front;
        LinearNode<Type> * toBeRemoved = nullptr;
        LinearNode<Type> * previous = nullptr;
        
        Type removedData;
        
        if(index == 0)
        {
            toBeRemoved = front;
            this->front = this->front->getNextNode();
        }
       else
       {
           for (int position = 0; position < index; position++)
           {
               previous = current;
               current = current->getNextNode();
           }
           
           toBeRemoved = current;
           
           if (index== this->size - 1)
           {
               previous->setnextNode(nullptr);
               end = previous;
           }
           else
           {
               current = toBeRemoved->getNextNode();
               previous->setNextNode(current);
           }
       }
        this->size -=1;
        
        removedData = toBeRemoved->getData();
        delete toBeRemoved;
        return removedData;
    }
    
    LinearNode<Type> * LinkedList<Type> :: getEnd()
    {
        return this->end;
    }
    
};

template <class Type>
class Array
{
private: Type * internalArray;
    int size;
public:
    //Constructor
    Array<Type>(int size);
    
    //Copy Constructor
    Array<Type>(cont Array<Type> & toCopy);
    //Destructor
    ~Array<Type>();
    
    //Operators
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator {} (int index);
    Type operator [] (int idex) cost;
    
    //Methods
    int getSize() const;
    type getFromIndexintindex);
    void setAtIndex(int index, Type data);
};

template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    this->size = size;
    
    internalArray = new Type[size];
};

template <class Type>
Array<Type> :: Array(cconst Array<Type> toCopy)
{
    this->size = toCopyy.getSize();
    
    //Buil Data Structure
    internalArray = new Type[size];
    
    for(int  index =0; index < size; index++)
    {
        internalArray[index] = toCopy[index];
    }
};


#endif /* Array_h */
