#ifndef _TEXTFILE_H_
#define _TEXTFILE_H_
#include <string>
#include<vector>
#include <fstream>
using namespace std;
class textfile
    {
    private:
    string x;
    string y;
    public:
    void setName(string, string);
    string fullName();
    void createFile(string);
    void accessFile(string);
    };















#endif
