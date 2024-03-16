/******************************************************************************
 5.with constructor
*******************************************************************************/

#include <iostream>
using namespace std;
class rectangle{
    private:
    int l,b;
    float ar,peri;
    public:
    rectangle(int x,int y){
        l=x;
        b=y;
        ar=l*b;
        peri=2*(l+b);
    }
    void Area(){
      cout<<"\nArea of rectangle is:"<<ar;  
      cout<<"\nPerimeter of rectangle is:"<<peri;
    }
};
int main()
{
    rectangle r1(4,5);
    rectangle r2(5,8);
    cout<<"\nArea of first rectangle is";
    r1.Area();
    cout<<"\n_______________________________";
    cout<<"\nArea of second rectangle is";
    r2.Area();
    return 0;
    
}