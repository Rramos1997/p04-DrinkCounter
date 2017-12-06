#include "drinkmath.h"
#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

vector <int> drinkmath::addDrinks(int x)
    {
<<<<<<< HEAD
    drinks = x;
    weeklyDrinks.push_back(drinks);
    return weeklyDrinks;
    }

void drinkmath::displayWeekly(vector <int> v)
{
    for(int row=0; row<v.size();row++)
    {
        cout<<v[row]<<" ";
    }
=======
    const int WEEK=7;
    weeklyDrinks.resize(WEEK);
    weeklyDrinks.push_back(x);
    display(weeklyDrinks);
    /* for (auto it = std::begin(foo); it!=std::end(foo); ++it)
    bar.push_back(*it); */
    }

void drinkmath::display(vector <int> v)
{
   for (auto it = std::begin(v); it!=std::end(v); ++it)
    std::cout << ' ' << *it;
>>>>>>> 6933fe724d9df2179d63760d2f2b1f4d22973fc9
    cout<<endl;
}

int drinkmath::weeklyAverage()
{
    int totalDrinks=0;
    int avgDrinks=0;
    for(int x=0;x<weeklyDrinks.size();x++)
    {
        totalDrinks = totalDrinks+weeklyDrinks[x];
    }
    if(weeklyDrinks.size()>0)
    {
        avgDrinks = totalDrinks / weeklyDrinks.size();
    }
    return avgDrinks;
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

/*int drinkmath::monthlyAverage()
{
    int totalDrinks=0;
    int monthlyAvg=0;
    for(int i=0;i<calender.size();i++)
        {
        for(int j=0;j<calender[i].size();j++)
            {
            }
        totalDrinks = totalDrinks + calender[i][j];

        }
        if(calender[i].size()>0)
        {
            monthlyAvg = totalDrinks / 28;
        }
        return monthlyAvg;
}
*/

