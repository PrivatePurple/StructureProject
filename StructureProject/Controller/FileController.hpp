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
#include "../Resouces/music.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    
    static vector<Music> musicDataToVector(string filename);
};

#endif /* FileController_hpp */