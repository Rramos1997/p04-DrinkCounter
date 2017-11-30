#ifndef _TEXTFILE_H_
#define _TEXTFILE_H_
#include <string>
#include<vector>
using namespace std;
class textfile
    {
    private:
    string x;
    string y;
    int drinks;
    vector <int> weeklyDrinks;
    vector <vector <int> > monthlyDrinks;
    public:
    void setName(string, string);
    string fullName();
    void createFile(string);
    void accessFile(string );
    };















#endif
