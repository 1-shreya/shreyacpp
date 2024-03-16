/******************************************************************************
 1.
*******************************************************************************/

#include <iostream>
using namespace std;
class student{
    private:
    char str[20]="John";
    int rn=2;
    public:
    void set(){
        cout<<"\nName of student is:"<<str;
        cout<<"\nRoll number is:"<<rn;
    }
};
main()
{
    student s1;
    s1.set();
}
