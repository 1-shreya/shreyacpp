/******************************************************************************
 11.
*******************************************************************************/

#include <iostream>
#include<string.h>
using namespace std;
class employee{
    private:
    int yrjoin;
    long int salary;
    string adrs,name;

    public:
    employee(string s,int a,string t)
    {
      name=s;
      yrjoin=a;
      adrs=t;
    }
    
    void show()
    {
      cout<<"\n"<<name<<"\n"<<yrjoin<<"\n"<<adrs;
    }
};
int main()
{
 employee e1("Robert",1994,"64c-WallsStreat");
 employee e2("sam",2000,"68D-WallsStreat");
 employee e3("John",1999,"26B-WallsStreat");
 cout<<"\nName year of joining and address are:";
 cout<<"\n----------------------------------";
 e1.show();
 cout<<"\n----------------------------------";
 e2.show();
 cout<<"\n----------------------------------";
 e3.show();
   
    
}