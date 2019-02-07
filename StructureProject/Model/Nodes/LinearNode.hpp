//
//  LinearNode.h
//  StructureProject
//
//  Created by Davis, Keenan on 1/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef LinearNode_hpp
#define LinearNode_hpp

#include "Node.hpp"

template <class Type>
class LinearNode : public Node<Type>
{
private:
    LinearNode<Type> * next;
public:
    LinearNode();
    LInearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    LinearNode<Type> * getNext()
    void setNext(LinearNode<Type> * next);
};

//Implementation of templates
template <class Type>
LinearNode<Type> :: LinearNode() : Node()
{}

template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data)
{
    this->next = nullptr;
}

template <class Type>
LinearNode<Type> ::LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(Data)
{
    this->next = next;
}

template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNext()
{
    return this->next;
}

template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNextNode()
{
    return this->next;
}
template <class Type>
void LinearNode<Type>  :: setNext(LinearNode<Type> * next)
{
    this-> = next;
}

#endif /* LinearNode_h */
