#include<iostream>
using namespace std;
int main()
{ int a,b,c;
  cout<<"enter year number to find if it is leap year or not"<<endl;
  cin>>a;
  if(a%400==0 || a%100!=0 && a%4==0)
  {cout<<a<<" is a leap year"<<endl;}
  else
  {cout<<a<<" is not a leap year";}}
