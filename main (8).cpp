/******************************************************************************
 6.
*******************************************************************************/

#include <iostream>
using namespace std;
class area{
    private:
    int l,b;
    float ar;
    public:
    void setdim(){
      cout<<"\nlength of rectangl is:";
      cin>>l;
      cout<<"\nbreadth of rectangle is:";
      cin>>b;
      ar=l*b;
    }
    void getarea()
    {
         cout<<"\nArea of rectangle is:"<<ar;
    }
};
int main()
{
   
    area a1;
    a1.setdim();
    cout<<"\n_______________________________";
    a1.getarea();
    return 0;
    
}