/***************************************************************************
14.
*******************************************************************************/

#include <iostream>
using namespace std;
class student{
    private:
    int height,i,n,count=0,avg;
    public:
    void show(){
    cout<<"\nEnter number of student:";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        cout<<"\nEnter height:";
        cin>>height;
        count++;
    }
    count=count+height;
    cout<<"\nTotal height is:"<<count;
    avg=count/n;
    cout<<"\nAverage height is:";
    cout<<avg;
}
};
int main() {
student st;
st.show();
return 0;
}