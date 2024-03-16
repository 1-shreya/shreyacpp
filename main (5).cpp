/******************************************************************************
 3.
*******************************************************************************/

#include <iostream>
using namespace std;
class Triangle{
    private:
    int a,b,c;
    float ar,peri;
    public:
    void set(){
        a=3;
        b=4;
        c=5;
        peri=a+b+c;
        ar=0.5*a*b;
    }
    void show(){
    cout<<"\nPerimeter of triangle is:"<<peri;  
    cout<<"\nArea of triangle is:"<<ar;  
    }
};
int main()
{
    Triangle t1;
    t1.set();
    t1.show();
    return 0;
    
}