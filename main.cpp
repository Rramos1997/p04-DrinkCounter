#include<iostream>
#include<string>
#include<vector>
#include "textfile.h"
#include "drinkmath.h"
#include <fstream>
using namespace std;

int main()
{
drinkmath beverage;
textfile fileAction;
char option;
cout<<"Would you like to start a new file or open an existing file?\n(N)ew/(O)pen/(C)lose..."<<endl;
cin>>option;
while((option != 'O') && (option != 'o') && (option != 'N') && (option != 'n') && (option != 'C') && (option !='c'))
    {
    cout<<"Please enter a valid option."<<endl;
    cin>>option;
    }


if((option == 'O') || (option =='o'))
    {
    string previousFile;
    cout<<"What is your file name?"<<endl;
    cin>>previousFile;

    fileAction.accessFile(previousFile);
    }


else if((option == 'N') || (option == 'n'))
    {
    int drinks;
    string firstName,lastName;
    cout<<"What is your full name?"<<endl;
    cin>>firstName>>lastName;
    fileAction.setName(firstName,lastName);
    fileAction.createFile(fileAction.fullName());
    cout<<"Hello, "<<firstName + "!"<<endl;
    vector <int> weeklyDrinks;
    do
    {   
        cout<<"How many alcoholic beverages have you had each day of this week? (Enter -1 to finish)"<<endl;
        cin>>drinks;
        
    }while(drinks > -1);
        {
        beverage.addDrinks(drinks);
        }
    }


else((option == 'C') || (option != 'c'));

    







return 0;
}
