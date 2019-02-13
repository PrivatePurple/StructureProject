//
//  LinearTester.cpp
//  StructureProject
//
//  Created by Davis, Keenan on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//


#include "LinearTester.hpp"

void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimer OOP, musiSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/kdav1286/Documents/C++ Projects/StructureProject/StructureProject/Resouces/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/kdav1286/Documents/C++ Projects/StructureProject/StructureProject/Resouces/crime.csv");
    crimeTimerOOP.stopTimer();
    
    crimeTimerSTL.displayInformation();
    crimeTimerOOP.displayinformation();
    cout << "A difference of: " <<  crimeTimerOOOP.getTimeInMicroSeconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
}


