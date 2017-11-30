#include<iostream>
#include<string>
#include<vector>
#include "textfile.h"

using namespace std;

int main()
{
textfile fileAction;
char option;
cout<<"Would you like to start a new file or open an existing file?\n(N)ew/(O)pen/(C)lose..."<<endl;

while((option != 'O'||'o') && (option != 'N'||'n') && (option != 'C'||'c'))
    {
    cout<<"Please enter a valid option."<<endl;
    cin>>option;
    }
if(option == 'O'||'o')
    {
    string previousFile;
    cout<<"What is your file name?"<<endl;
    cin>>previousFile;

    fileAction.accessFile(previousFile);

    }
else if(option == 'N'||'n')
    {
    string firstName,lastName;
    cout<<"What is your full name?"<<endl;
    cin>>firstName>>lastName;
    fileAction.setName(firstName,lastName);
    fileAction.createFile(fileAction.fullName());

    }
else(option == 'C'||'c');










return 0;
}
