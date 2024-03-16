/******************************************************************************
 2.
*******************************************************************************/

#include <iostream>
using namespace std;
class student{
    private:
    char adrs[100];
    int rn;
    long int phn;
    public:
    void set(){
        cout<<"\nRoll number is:";
        cin>>rn;
        cout<<"\nphone number is:";
        cin>>phn;
        cout<<"\nAddress is:";
        cin>>adrs;
    }
    void show(){
        cout<<"\nRoll number ,Phone number and Address of students:";
        cout<<rn<<"\n"<<phn<<"\n"<<adrs;
    }
};
int main()
{
    student sam,john;
    cout<<"\nDetails for sam";
    sam.set();
    cout<<"\nDetails for john";
    john.set();
    sam.show();
    john.show();
    return 0;
}
