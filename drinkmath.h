#ifndef _DRINKMATH_H_
#define _DRINKMATH_H_
#include <string>
#include <vector>
#include <cmath>
using namespace std;
class drinkmath
    {
    private:
    int drinks;
    vector <int> weeklyDrinks;
    vector < vector <int> > calender;
    public:
    void display(vector <int>&);
    void addDrinks(int);
    vector < vector <int> > monthlyDrinks(vector <int>);

    };


#endif
