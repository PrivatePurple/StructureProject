//
//  LinearTester.hpp
//  StructureProject
//
//  Created by Davis, Keenan on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef LinearTester_hpp
#define LinearTester_hpp


#include "../Controller/Tools/Timer.hpp"
#include "../Controller/FileController.hpp"

#include "../Model/Linear/LinkedList.h"
#include "../Model/Linear/Stack.h"
#include "../Model/Linear/Queue.h"
#include "../Model/Linear/Array.hpp"
#include <iostream>

using namespace std;

class LinearTester
{
public:
    void testVsSTL();
};

#endif /* LinearTester_hpp */
