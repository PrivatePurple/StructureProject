//
//  FileController.cpp
//  StructureProject
//
//  Created by Davis, Keenan on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "FileController.hpp"
#include "../Controller/Tools/Timer.hpp"
#include "../Controller/FileController.hpp"

#include "../Model/Linear/LinkedList.h"
#include "../Model/Linear/Stack.h"
#include "../Model/Linear/Queue.h"
#include "../Model/Linear/Array.hpp"
#include <iostream>


vector<CrimeData> FileController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at that path.
    if ( dataFile.is_open())
    {
        //Keep reading until you reach the end of the file
        while (!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            if (rowCount !=0 )
            {
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimeVector;
}

vector<Music> FileController :: musicDataToVector(string filename)
{
    std :: vector<Music> musicVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at that path.
    if ( dataFile.is_open())
    {
        //Keep reading until you reach the end of the file
        while (!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            if (rowCount !=0 )
            {
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    musicVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return musicVector;
}

LinkedList<Music> FileController :: musicDataToList(string fileName)
{
    LinkedList<Music> musicList;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    //if the file exists at that path.
    if(dataFile.is_open())
    {
        //Keep reading util you are at the end of the file.
        while(!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character.
            getline(dataFile, currentCSVLine, '\r');
            //Exclude header row.
            if  ( rowCount !=0)
            {
                //Create a music instance from the line. Exclude a blank line,
                if(currentCSVLine.length() !=0)
                {
                    Music row(currentCSVLine);
                    musicList.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return musicList;
}

LinkedList<CrimeData> FileController :: readDataToList(string fileName)
{
    LinkedList<CrimeData> crimes;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    //if the file exists at that path.
    if(dataFile.is_open())
    {
        //Keep reading util you are at the end of the file.
        while(!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character.
            getline(dataFile, currentCSVLine, '\r');
            //Exclude header row.
            if  ( rowCount !=0)
            {
                //Create a music instance from the line. Exclude a blank line,
                if(currentCSVLine.length() !=0)
                {
                    CrimeData row(currentCSVLine);
                    crimes.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimes;
}
