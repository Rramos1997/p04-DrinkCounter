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
    int drinks, avgDrink, monthlyAvg;
    string firstName,lastName;

    cout<<"What is your full name?"<<endl;
    cin>>firstName>>lastName;
    fileAction.setName(firstName,lastName);
    fileAction.createFile(fileAction.fullName());
    cout<<"Hello, "<<firstName + "!"<<endl;
    for(int x=1;x<7;x++)
        {
            cout<<"How many alcoholic beverages have you had each day of this week?"<<endl;
            cin>>drinks;        
            beverage.addDrinks(drinks);
       
        }
    vector <int> weeklyDrinks = beverage.addDrinks(drinks);
    beverage.displayWeekly(weeklyDrinks);
    avgDrink = beverage.weeklyAverage();

    cout<<"You averaged "<<avgDrink<<" drinks per day this week."<<endl;

    beverage.monthlyDrinks(weeklyDrinks);
    vector <vector <int> > monthlyDrinks = beverage.monthlyDrinks(weeklyDrinks);
    beverage.displayMonthly(monthlyDrinks);
//    monthlyAvg = beverage.monthlyAverage();

//  cout<<"You have averaged "<<monthlyAvg<<" drinks this month."<<endl;
    }

else((option == 'C') || (option != 'c'));

    







return 0;
}
