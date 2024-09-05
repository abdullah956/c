#include<iostream>
using namespace std;
int main()
{ int a,b,c,d;
  cout<<"enter first number ";
  cin>>a;
  cout<<"enter second number ";
  cin>>b;
  c=a*b;
  d=1;
   do{ if(d%a==0 && d%b==0)
  { cout<<"LCM of both number you have entered is "<<d;
    break;} 
    d++;}  while(d<=c);
}
