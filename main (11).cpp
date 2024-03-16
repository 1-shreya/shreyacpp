/******************************************************************************
 9.
*******************************************************************************/

#include <iostream>
using namespace std;
class volume{
    private:
    int l,b,h;

    public:
    void set()
    {
        l=7;
        b=4;
        h=3;
    }
    
    int printvolume()
    {
        cout<<"Volume is:";
        set();
      return l*b*h;
    }
};
int main()
{  
 volume v;
    cout<<v.printvolume();
    return 0;
    
}