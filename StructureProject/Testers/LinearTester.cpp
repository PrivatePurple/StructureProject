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
    Timer crimeTimerSTL, crimeTimerOOP, musiSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/kdav1286/Documents/C++ Projects/StructureProject/StructureProject/Resouces/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/kdav1286/Documents/C++ Projects/StructureProject/StructureProject/Resouces/crime.csv");
    crimeTimerOOP.stopTimer();
    
    cout << "This is the STL Read time: " << endl;
    crimeTimerSTL.displayInformation();
    
    cout << "This is the OOP Node Read time: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " <<  crimeTimerOOP.getTimeInMicroSeconds() - crimeTimerSTL.getTimeInMicroSeconds() << " microseconds" << endl;
    
    musiSTL.startTimer();
    vector<CrimeData> tunez = FileController :: readCrimeDataToVector("/Users/kdav1286/Documents/C++ Projects/StructureProject/StructureProject/Resouces/crime.csv");
    musiSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<CrimeData> musicList = FileController :: readDataToList("/Users/kdav1286/Documents/C++ Projects/StructureProject/StructureProject/Resouces/crime.csv");
    musicOOP.stopTimer();
    
    cout << "This is the STL Read time: " << endl;
    crimeTimerSTL.displayInformation();
    
    cout << "This is the OOP Node Read time: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " <<  crimeTimerOOP.getTimeInMicroSeconds() - crimeTimerSTL.getTimeInMicroSeconds() << " microseconds" << endl;
}


