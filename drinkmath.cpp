#include "drinkmath.h"
#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

void drinkmath::addDrinks(int x)
    {
    const int WEEK=7;
    weeklyDrinks.resize(WEEK);
    weeklyDrinks.push_back(x);
    display(weeklyDrinks);
    }

void drinkmath::display(vector <int>& v)
{
    for(int i=0; i<v.size();i++)
    {
        cout << v[i]<<" ";
    }
    cout<<endl;
}
// vector < vector <int> > drinkmath:: monthlyDrinks(vector <int>)
    

