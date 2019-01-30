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

using namespace  std; //Used for keyword access.

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
}

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
}


#endif /* Array_h */
