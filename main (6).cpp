/******************************************************************************
 4.with constructor
*******************************************************************************/

#include <iostream>
using namespace std;
class Triangle{
    private:
    int a,b,c;
    float ar,peri;
    public:
    Triangle(int x,int y,int z){
        a=x;
        b=y;
        c=z;
        peri=x+y+z;
        ar=0.5*x*y;
    }
    void show(){
    cout<<"\nPerimeter of triangle is:"<<peri;  
    cout<<"\nArea of triangle is:"<<ar;  
    }
};
int main()
{
    Triangle t1(3,4,5);
    t1.show();
    return 0;
    
}