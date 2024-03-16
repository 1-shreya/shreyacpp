/***************************************************************************.
*******************************************************************************/

nclude<iostream>
using namespace std;

class Complex{
public:
void Addition();
void Substraction();
void Multiplication();
};

void Complex::Addition(){
int a,b,c,d;
cout<<"Enter real and imaginary part of 1st number:"<<endl;
cin>>a>>b;

cout<<"Enter real and imaginary part of 1st number:"<<endl;
cin>>c>>d;

int sum1 =a+c;
int sum2 = b+d;

cout<<"The Addition is:"<<"("<<sum1<<")"<<"+"<<"i"<<"("<<sum2<<")"<<endl;
}

void Complex::Substraction(){
int a,b,c,d;
cout<<"Enter real and imaginary part of 1st number:"<<endl;
cin>>a>>b;

cout<<"Enter real and imaginary part of 1st number:"<<endl;
cin>>c>>d;

int sub1 =a-c;
int sub2 = b-d;

cout<<"The Substraction is:"<<"("<<sub1<<")"<<"-"<<"i"<<"("<<sub2<<")"<<endl;
}

void Complex::Multiplication(){
int a,b,c,d;
cout<<"Enter real and imaginary part of 1st number:"<<endl;
cin>>a>>b;

cout<<"Enter real and imaginary part of 1st number:"<<endl;
cin>>c>>d;

int mul1=((a*c)-(b*d));
int mul2=((a*d)+(b*c));

cout<<"The Multiplication is:"<<"("<<mul1<<")"<<"+"<<"i"<<"("<<mul2<<")"<<endl;
}
int main(){
Complex obj;
int ch;
cout<<"Enter choice: 1)Addition 2)Substraction 3)Multiplication 4)Exit";
cin>>ch;

switch(ch){
case 1:
obj.Addition();
break;
case 2:
obj.Substraction();
break;
case 3:
obj.Multiplication();
break;
case 4: break;
}

}
