//
//  Controller.cpp
//  StructureProject
//
//  Created by Davis, Keenan on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start()
{
    cout << "Welcome to the Data Structures App." << endl;
    usingNodes();
    testFiles();
}

void Controller :: usingNodes()
{
    Node<int> mine(5);
    Node<string> wordHolder("words can be stored too");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("replaced text");
    cout << wordHolder.getData() << endl;
    
    vector<Music> tunes = FileController :: musicDataToVector("/Users/kdav1286/Documents/C++ Projects/StructureProject/StructureProject/Resouces/music.csv");
    
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/kdav1286/Documents/C++ Projects/StructureProject/StructureProject/Resouces/crime.csv");
}

void Controller :: testFiles()
{
    vector<Music> musicReport = FileController :: musicDataToVector("/Users/kdav1286/Documents/C++ Projects/StructureProject/StructureProject/Resouces/music.csv");
    vector<CrimeData> crimeReport = FileController :: readCrimeDataToVector("/Users/kdav1286/Documents/C++ Projects/StructureProject/StructureProject/Resouces/crime.csv");
    
    cout << "[Music]" << endl;
    for(int index = 234; index < 255; index++)
    {
        cout << index << ":Contents are: " << musicReport[index] << endl;
    }
    cout << "[Crime]" << endl;
    for(int index = 234; index < 255; index++)
    {
        cout << index << ":Contents are: " << crimeReport[index] << endl;
    }
}


