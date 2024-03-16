/******************************************************************************
 * 13.

*******************************************************************************/

#include<iostream>
using namespace std;
#define Total_mrk 3

void Average(float Python[7], float OS[7], float CPP[7]){
float sum1;
float sum[7];
for(int i=0; i<8; i++){
sum1=Python[i]+OS[i]+CPP[i];
sum1=sum1/Total_mrk;
sum[i]=sum1;
}
cout<<"\nAverage Marks for each student:"<<endl;
for(int j=0;j<8;j++){
cout<<sum[j]<<" ";
}
}


int main(){
int n, m, p,q,r,count;
float Python[7], OS[7],CPP[7];
cout<<"Enter makrs for 1)Python 2)OS 3)C++ out of 100"<<endl;
count=1;
for(int i=0; i<8; i++){
cout<<"Marks for Student No. :"<<count<<endl;

cout<<"Enter Python Marks:";
cin>>p;
Python[i]=p;

cout<<"Enter OS Marks:";
cin>>q;
OS[i]=q;

cout<<"Enter CPP Marks:";
cin>>r;
CPP[i]=r;

cout<<"\n"<<endl;
count++;
}

cout<<"\nRoll no:";
for(int k=1;k<8;k++){
cout<<k<<" ";
}
cout<<" "<<endl;
Average(Python,OS,CPP);


}
