#include<iostream>
using namespace std;
int main()
{ int here[5]={12,13,15,16,15};
  int n,loc,i;
  loc=-1;
  cout<<"enter the number you want to find in the arry";
  cin>>n;
  for(i=0; i<5; i++)
  {if(n==here[i])
  {loc=i;}}
   if(loc==-1)
   {cout<<"number is not found";}
   else
   cout<<"number was found at "<<loc<<endl;}
  

