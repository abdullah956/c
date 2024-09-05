#include<iostream>
using namespace std;
void divide()
{int a,b,div;
 cout<<"enter values ";
 cin>>a>>b;
 div=a/b;
 cout<<div;}
void multiply()
{int a,b,mult;
 cout<<"enter values";
 cin>>a>>b;
 mult=a*b;
 cout<<mult;}
void subtract()
{int a,b,sub;
 cout<<"enter values";
 cin>>a>>b;
 sub=a-b;
 cout<<sub;}
void add()                            //name a function of own chóice
{int a,b,sum;
 cout<<"enter values";
 cin>>a>>b;
 sum=a+b;
 cout<<sum;}
int main()
{char c;
 cout<<"for addition press +"<<endl;
 cout<<"for subtraction press -"<<endl;
 cout<<"for multiplication press *"<<endl;
 cout<<"for division press /"<<endl;
 cin>>c;
 if (c=='+')
 add();
 if (c=='-')
 subtract();                              //calling the function
 if (c=='*')
 multiply();
 if (c=='/')
 divide();
 if (c!='+' && c!='-' && c!='*' && c!='/')
 cout<<"end program";}
