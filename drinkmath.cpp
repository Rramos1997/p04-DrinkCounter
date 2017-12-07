#include "drinkmath.h"
#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

vector <int> drinkmath::addDrinks(int x)
    {
    drinks = x;
    weeklyDrinks.push_back(drinks);
    return weeklyDrinks;
    }

void drinkmath::displayWeekly(vector <int> v)
{
int const WEEK = v.size();
    for(int row=0; row<WEEK-1;row++)
    {
        cout<<v[row]<<" ";
    }
}

int drinkmath::weeklyAverage()
{
    int totalDrinks=0;
    int averageDrinks=0;
    for(int x=0;x<weeklyDrinks.size();x++)
    {
        totalDrinks = totalDrinks+weeklyDrinks[x];
    }
    if(weeklyDrinks.size()>0)
    {
        averageDrinks = totalDrinks / weeklyDrinks.size();
    }
    return averageDrinks;
}

vector < vector <int> > drinkmath:: monthlyDrinks(vector <int>)
{
    calender.push_back(weeklyDrinks);
    
    return calender;
}
    
void drinkmath::displayMonthly(vector <vector <int> > v)
{
    for(int x=1;x<v.size();x++)
        {
        for(int y=0;y<v[x].size();y++)
            {   
            cout<<calender[x][y]<<" ";
            }
        cout<<endl;
        }
}

int drinkmath::monthlyAverage()
{
    int totalDrinks=0;
    int monthlyAvg=0;
    for(int x=0;x<calender.size();x++)
        {
        for(int y=0;y<calender[x].size();y++)
            {
            totalDrinks = totalDrinks + calender[x][y];
            }
        //totalDrinks = totalDrinks + calender[x][y];

        }
        if(calender.size()>0)
        {
            monthlyAvg = totalDrinks / 30;
        }
        return monthlyAvg;
}

void drinkmath::weeklyUpdate()
{   
    int y = 0;
    int avgDrink;
    cout<<"How many alcoholic beverages have you had each day of this week?"<<endl;
     for(int x=0;x<7;x++)
        {
            cin>>y;
            addDrinks(y);
        }
     weeklyDrinks = addDrinks(y);
     displayWeekly(weeklyDrinks);
     avgDrink = weeklyAverage();
     cout<<"\nYou averaged "<<avgDrink<<" drinks per day this week."<<endl;

}



















