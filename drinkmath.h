#ifndef _DRINKMATH_H_
#define _DRINKMATH_H_
#include <string>
#include <vector>
#include <cmath>
using namespace std;
class drinkmath
{
        private:
                int weeksFilled=0;
                int totalDrinks;
                int avgDrink;
                int drinks;
                vector <int> weeklyDrinks;
                vector < vector <int> > calender;
        public:
                drinkmath();
                void displayWeekly(vector <int>);
                vector <int> addDrinks(int);
                void weeklyUpdate();
                int weeklyTotal();
                int weeklyAverage();
                void monthlyDrinks(vector <int>);
                double monthlyAverage();
                int monthlyTotal();
                void clearVectors();
};


#endif
