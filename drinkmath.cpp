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
    /* for (auto it = std::begin(foo); it!=std::end(foo); ++it)
    bar.push_back(*it); */
    }

void drinkmath::display(vector <int> v)
{
   for (auto it = std::begin(v); it!=std::end(v); ++it)
    std::cout << ' ' << *it;
    cout<<endl;
}
// vector < vector <int> > drinkmath:: monthlyDrinks(vector <int>)
    

