/******************************************************************************
 12.
*******************************************************************************/

#include <iostream>
#include<string.h>
using namespace std;
class employee{
    private:
    string name,doj;
    int salary;

    public:
    /*employee(string s,string t,int a,)
    {
      name=s;
      doj=t;
      salary=a;
    }*/
    void set()
    {
        cout<<"Enter name,date of join and salary of empolyee:";
        cin>>name>>doj>>salary;
    }
    
    void show()
    {cout<<"\nEmployee details are:";
      cout<<"\n"<<name<<"\n"<<doj<<"\n"<<salary;
    }
};
    int main()
    {
    employee emp[10];
    int i;
    for(i=0;i<=2;i++)
    { 
    emp[i].set();
    }
    cout<<"\n----------------------------------";
    for(i=0;i<=2;i++)
    { 
    emp[i].show();
    }

 

 
    
}