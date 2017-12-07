#include "textfile.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;
void textfile::setName(string firstName,string lastName)
    {
    x = firstName;
    y = lastName;
    }

string textfile::fullName()
    {
    string combinedName;
    combinedName = x.append(y);
    return combinedName;
    }

void textfile::createFile(string z)
    {
    std::ofstream newFile; 
    newFile.open(z.append(".txt").c_str(), std::ofstream::out | std::ofstream::in | std::ofstream::app); 
    cout<<"Your file has been named "<<z<<endl;
    ofstream SaveFile(z.c_str());

    }





void textfile::accessFile(string previousFile)
    {
    bool validFile;
    string line;
    std::fstream oldFile;
    oldFile.open(previousFile.c_str(), std::fstream::in | std::fstream::out | std::fstream::app);
    validFile = oldFile.is_open();
    while(validFile = false)
        {
        cout<<"Error loading file, please enter file name again."<<endl;
        cin>>previousFile;
        }

cout<<"Welcome back!"<<endl;

    oldFile.close();
    
    }










