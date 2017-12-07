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
    string line;
    char reply;
    string previousFile;
    cout<<"What is your file name?(First and last name.txt. EX:'JohnDoe.txt')"<<endl;
    cin>>previousFile;
    fileAction.accessFile(previousFile);
    beverage.weeklyUpdate();
    cout<<"Would you like to view your month so far? (Y/N)"<<endl;
    cin>>reply;
    ofstream fileName(previousFile.c_str());
    if(reply == 'Y' || 'y')
        {
        while(!fileName.eof())
            {
            getline(fileName,line);
            cout<<line<<endl;
            }
            fileName.close();

        }
    }

else if((option == 'N') || (option == 'n'))
    {
    int drinks, monthlyAvg;
    string firstName,lastName;
    cout<<"What is your first and last name?"<<endl;
    cin>>firstName>>lastName;
    fileAction.setName(firstName,lastName);
    fileAction.createFile(fileAction.fullName());
    cout<<"Hello, "<<firstName + "!"<<endl;
    beverage.weeklyUpdate();
   /* cout<<"How many alcoholic beverages have you had each day of this week?"<<endl;

    for(int x=0;x<7;x++)
        {
            cin>>drinks;        
            beverage.addDrinks(drinks);
       
        }
    vector <int> weeklyDrinks = beverage.addDrinks(drinks);
    beverage.displayWeekly(weeklyDrinks);
    avgDrink = beverage.weeklyAverage();

    cout<<"\nYou averaged "<<avgDrink<<" drinks per day this week."<<endl;*/

//    beverage.monthlyDrinks(weeklyDrinks);
//    vector <vector <int> > monthlyDrinks = beverage.monthlyDrinks(weeklyDrinks);
//    beverage.displayMonthly(monthlyDrinks);
//    monthlyAvg = beverage.monthlyAverage();

//  cout<<"You have averaged "<<monthlyAvg<<" drinks this month."<<endl;
    }
    

else((option == 'C') || (option != 'c'));

    







return 0;
}
