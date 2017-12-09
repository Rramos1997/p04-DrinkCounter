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
        newFile.open(z.append(".txt").c_str(), std::ofstream::out | std::ofstream::app); 
        cout<<"Your file has been named "<<z<<endl;


}





void textfile::accessFile(string previousFile)
{

        ifstream oldFile;
        oldFile.open(previousFile.c_str(), ifstream::in | ifstream::app);
        cout<<"Welcome back!"<<endl;
}












