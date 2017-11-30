#include "textfile.h"
#include <string>
#include <vector>
#include <iostream>
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
    ifstream newFile(userName.append(".txt").c_str()); 

    }





void textfile::accessFile(string x)
    {
    bool validFile;
    std::fstream file;
    file.open (x, std::fstream::in | std::fstream::out | std::fstream::app);
    validFile=file.is_open();
    if(validFile = true)
        {   
        cout<<"Welcome back!"<<endl;

        }
    }
