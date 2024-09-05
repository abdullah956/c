#include<iostream>
using namespace std;
int main()
{ int a,b,c;
  cout<<"enter a number ";
  cin>>a;
  b=0;
  c=0;
  while(a>0)
  { b=a%10;
    c=c+b;
    a=a/10;}
    cout<<"sum of the digits present in the number have entered is "<<c;
}
