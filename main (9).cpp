/******************************************************************************
 7.
*******************************************************************************/

#include <iostream>
using namespace std;
class area{
    private:
    int l,b;
    float ar1;
    public:
    area(int x,int y){
        l=x;
        b=y;
    //ar1=x*y;
    }
    int returnarea()
    { 
        return l*b;
    }
};
int main()
{   
    int a,b;
    //area a1( a,b);
      cout<<"\nlength of rectangl is:";
      cin>>a;
      cout<<"\nbreadth of rectangle is:";
      cin>>b;
     area a1( a,b);  
    
    cout<<"\n_______________________________";
   cout<<"\nArea of rectangle is:"<<a1.returnarea();
    return 0;
    
}