#include "drinkmath.h"
#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

drinkmath::drinkmath()
{
        calender.resize(4);
        for(int x=0;x<calender.size();x++)
                calender[x].resize(7);
}



vector <int> drinkmath::addDrinks(int x)
{
        drinks = x;
        weeklyDrinks.push_back(drinks);
        return weeklyDrinks;
}


void drinkmath::displayWeekly(vector <int> v)
{
        int const WEEK = v.size();
        for(int row=0; row<7;row++)
        {
                cout<<v[row]<<" ";
        }
}


int drinkmath::weeklyTotal()
{
        int totalDrinks=0;
        for(int x=0;x<weeklyDrinks.size();x++)
        {
                totalDrinks = totalDrinks+weeklyDrinks[x];
        }
        return totalDrinks;
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


void drinkmath:: monthlyDrinks(vector <int> x)
{
        cout << "MONTHLY DRINKS" << endl;
        for(int i=0;i<x.size();i++)
                calender[weeksFilled][i]=x[i];

        for(int row=0;row<calender.size();row++)
        {
                for(int col=0;col<calender[0].size();col++)
                {   
                        cout<<calender[row][col]<<" ";
                }
                cout<<endl;
        }
        weeksFilled++;
}

int drinkmath::monthlyTotal()
{
        int totalDrinks=0;
        double monthlyAvg=0;
        for(int i=0;i<calender.size();i++)
        {
                for(int j=0;j<calender[i].size();j++)
                {

                        totalDrinks = totalDrinks + calender[i][j];
                }
        }
        return totalDrinks;
}


double drinkmath::monthlyAverage()
{
        int totalDrinks=0;
        double monthlyAvg=0;
        for(int i=0;i<calender.size();i++)
        {
                for(int j=0;j<calender[i].size();j++)
                {

                        totalDrinks = totalDrinks + calender[i][j];
                }

        }
        if(calender.size()>0)
        {
                monthlyAvg = totalDrinks / 28;
        }
        return monthlyAvg;
}


void drinkmath::weeklyUpdate()
{

        int totalDrinks;
        int y = 0;
        int avgDrink;
        cout<<"How many alcoholic beverages have you had each day of this week?"<<endl;
        for(int x=0;x<7;x++)
        {
                cin>>y;

                weeklyDrinks = addDrinks(y);
        }
        displayWeekly(weeklyDrinks);
        avgDrink = weeklyAverage();
        totalDrinks = weeklyTotal();
        cout<<"\nYou had a total of "<<totalDrinks<<" and you averaged "<<avgDrink<<" drinks per day this week."<<endl;
        monthlyDrinks(weeklyDrinks);
}

void drinkmath::clearVectors()
{
        weeklyDrinks.erase(weeklyDrinks.begin(), weeklyDrinks.end());
}

















