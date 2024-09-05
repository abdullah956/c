#include<iostream>
using namespace std;
int main()
{ int a,b,c;
  c=0;
  cout<<"enter number";
  cin>>a;
  for(b=2; b<=a; b++)
  {if(a%b==0)
  {c++;}}
  if(c==1)
  {cout<<"number is prime";}
  else 
  {cout<<"number is not prime";}}
