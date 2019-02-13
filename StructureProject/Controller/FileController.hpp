//
//  FileController.hpp
//  StructureProject
//
//  Created by Davis, Keenan on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Resouces/CrimeData.hpp"
#include "../Resouces/Music.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include "../Model/Linear/Array.hpp"
//#include "../Model/Linear/LinkedList.hpp"   <~~~~~~~~~~~~  NEED TO ADD!!!
// #include "../Model/NonLinear/BinarySearchTree.hpp

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static vector<Music> musicDataToVector(string filename);\
    
    static Array<Music> musicDataToArray(string filename);
    
    static LinkedList<CrimeData> readDataToList(string filename);
    static LinkedList<Music> musicDataToList(string filename);
    
    // static BinarySearchTree<CrimeData> readDataToTree(string filename);
    // static BinarySearchTree<Music> musicDataToTree(String filename);
};

#endif /* FileController_hpp */
