//
//  List.h
//  StructureProject
//
//  Created by Davis, Keenan on 2/7/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef List_h
#define List_h
#include "../Nodes/LinearNode.hpp"

template <class type>
{
protected:
    int size;
    
//Structure
public:
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remove(intindex) =0;
    virtual Type getFromIndex(int indeex)  = 0;
    //Helper
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    Virtual LinearNode<Type> * getEnd() = 0;
}


#endif /* List_h */
