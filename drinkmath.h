#ifndef _DRINKMATH_H_
#define _DRINKMATH_H_
#include <string>
#include <vector>
#include <cmath>
using namespace std;
class drinkmath
    {
    private:
    int totalDrinks;
    int avgDrink;
    int drinks;
    vector <int> weeklyDrinks;
    vector < vector <int> > calender;
    public:
    void displayWeekly(vector <int>);
    vector <int> addDrinks(int);
    void weeklyUpdate();
    int weeklyAverage();
    vector < vector <int> > monthlyDrinks(vector <int>);
    void displayMonthly(vector <vector <int> >);
    int monthlyAverage();
    };


#endif
