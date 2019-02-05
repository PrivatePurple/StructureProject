//
//  Timer.cpp
//  StructureProject
//
//  Created by Davis, Keenan on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Timer.hpp"

using namespace std;

Timer :: Timer()
{
    executionTime = 0;
}

void Timer :: resetTimer()
{
    executionTime = 0;
}

void Timer :: startTimer()
{
    executionTime = 0;
}

void Timer :: stopTimer()
{
    assert(executionTime != 0);
    executionTime = clock() - executionTime;
}

void Timer :: displayInformation()
{
    cout << "Execution Time: " << executionTime << endl;
    cout << "In Human time: " << double (executionTime)/CLOCKS_PER_SEC <<
    " seconds" << endl;
    
}

long Timer :: getTimeInMicroseconds()
{
    return executionTime;
}
