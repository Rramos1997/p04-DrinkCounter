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


        while(1)
        {
                cout<<"Would you like to start a new file or open an existing file?\n(N)ew/(O)pen/(C)lose..."<<endl;

                cin>>option;

                while((option != 'O') && (option != 'o') && (option != 'N') && (option != 'n') && (option != 'C') && (option !='c'))
                {
                        cout<<"Please enter a valid option."<<endl;
                        cin>>option;
                }


                if((option == 'O') || (option =='o'))
                {
                        char reply;
                        string previousFile;
                        int moreDrinks;
                        double monthAvg;
                        beverage.clearVectors(); 
                        cout<<"What is your file name?(First and last name.txt. EX:'JohnDoe.txt')"<<endl;
                        cin>>previousFile;
                        fileAction.accessFile(previousFile);
                        beverage.weeklyUpdate();
                        cout<<"Did you have any other weeks you needed to upload?(Y/N)"<<endl;
                        while(cin>>reply){
                                if(reply == 'Y' || reply == 'y')
                                {
                                        cout<<"How many alcoholic beverages have you had each day of this week?"<<endl;
                                        vector <int> week;
                                        for(int x=0;x<7;x++)
                                        {
                                                cin>>moreDrinks;
                                                week.push_back(moreDrinks);
                                        }
                                        beverage.monthlyDrinks(week);
                                        monthAvg = beverage.monthlyAverage();
                                }
                                else
                                {
                                        break;
                                }   
                                cout<<"Your monthly average is "<<monthAvg<<" "<<endl;
                                cout<<"Did you have any other weeks you needed to upload?(Y/N)"<<endl;
                        }
                }
                else if((option == 'N') || (option == 'n'))
                {
                        double monthAvg;
                        int totalMonth;
                        char moreWeeks;
                        int drinks, monthlyAvg, moreDrinks;
                        beverage.clearVectors();
                        string firstName,lastName;
                        cout<<"What is your first and last name?"<<endl;
                        cin >> firstName >> lastName;
                        fileAction.setName(firstName,lastName);
                        fileAction.createFile(fileAction.fullName());
                        cout<<"Hello, "<<firstName + "!"<<endl;
                        beverage.weeklyUpdate();
                        cout<<"Did you have any other weeks you needed to upload?(Y/N)"<<endl;
                        while(cin>>moreWeeks){
                                if(moreWeeks == 'Y' || moreWeeks== 'y')        

                                {
                                        cout<<"How many alcoholic beverages have you had each day of this week?"<<endl;
                                        vector <int> week;
                                        for(int x=0;x<7;x++)
                                        {
                                                cin>>moreDrinks;
                                                week.push_back(moreDrinks);
                                        }
                                        beverage.monthlyDrinks(week);


                                        totalMonth = beverage.monthlyTotal();
                                        monthAvg = beverage.monthlyAverage();
                                }
                                else{
                                        break;
                                }
                                cout<<"Your monthly total is "<<totalMonth<<", and your monthly average is "<<monthAvg<<" "<<endl;
                                cout<<"Did you have any other weeks you needed to upload?(Y/N)"<<endl;
                        }
                } 
                else if((option == 'C') || (option == 'c')){
                        break;
                }
        }
        return 0;
}
