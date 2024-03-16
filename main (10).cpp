/******************************************************************************
8.
*******************************************************************************/

#include <iostream>
using namespace std;
class average{
    private:
    int a,b,c;
    float avg;
    public:
    average(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
        avg=(a+b+c)/3;
    }
    
    int show()
    {  avg=(a+b+c)/3;
      //cout<<"\naverage is:"<<avg;
    }
};
int main()
{   int x,y,z;

    cout<<"\nEnter number 1:";
        cin>>x;
         cout<<"\nEnter number 2:";
        cin>>y;
         cout<<"\nEnter number 3:";
        cin>>z;
       cout<<"\naverage is:"<<average::show();
    return 0;
    
}