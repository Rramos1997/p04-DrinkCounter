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

void textfile::createFile(string userName)
    {
    std::ofstream newFile; 
    newFile.open(userName.append(".txt").c_str(), std::ofstream::out | std::ofstream::in | std::ofstream::app); 
    cout<<"Your file has been named "<<userName<<endl;
    }





void textfile::accessFile(string x)
    {
    bool validFile;
    std::ofstream oldFile;
    oldFile.open(x.c_str(), std::ofstream::in | std::ofstream::out | std::ofstream::app);
    validFile = oldFile.is_open();
    while(validFile = false)
        {
        cout<<"Error loading file, please enter file name again."<<endl;
        cin>>x;
        }

cout<<"Welcome back!"<<endl;
    }










