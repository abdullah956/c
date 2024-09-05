#include<iostream>
using namespace std;
int main()
{ int a,b,c,d,e;
  cout<<"enter a number \n";
  cin>>a;
  e=a;
  b=0;
  c=0;
  while(a>0)
  {b=a%10;
   b=(b*b)*b;
   c=b+c;
   a=a/10;}
  cout<<"sum and cube of the digits present in the number have entered is "<<c<<endl;
  if(e==c)
  {cout<<e<<" is an armstorng number\n";}
  else
  {cout<<e<<" is not an armtong number\n";}
}
