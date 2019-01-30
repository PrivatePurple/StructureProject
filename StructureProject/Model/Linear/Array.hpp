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

#endif /* Array_h */
