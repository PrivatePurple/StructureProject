//
//  BinaryTreeNode.h
//  StructureProject
//
//  Created by Davis, Keenan on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeNode_h
#define BinaryTreeNode_h
#include "Node.hpp"

template <class Type>
class BinaryTreeNode : public Node<Type>
{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * leftChild;
    BinaryTreeNode<Type> * rightChild;
public:
    BinaryTreeNode();
    BinaryTreeNode(Type);
    
    BinaryTreeNode<Type> * getRootNode();
    BinaryTreeNode<Type> * getLeftChild();
    BinaryTreeNode<Type> * getRightChild();
    
    void setRootNode(BinaryTreeNode<Type> *);
    void setLeftChild(BinaryTreeNode<Type> *);
    void setRightChild(BinaryTreeNode<Type> *);
};

template <class Type>

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode()
{
    
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode()
{
    
}template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode()
{
    
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode()
{
    
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftChild()
{
    
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightChild()
{
    
}


#endif /* BinaryTreeNode_h */
