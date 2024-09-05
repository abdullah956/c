#include<iostream>
using namespace std;
int main()
{ int a,b,c,d,e,f,g,j;
  int here[15]={0};
  a=-30; 
  b=0; 
  c=14;
  cout<<"enter values in array but make sure you enter values in ascending order"<<endl;
  for(d=0; d<=14; d++)
  {cout<<"enter number";
  cin>>here[d];}
  cout<<"now enter the number you wanna find in array"<<endl;
  cin>>e;
  while(b<=c)
  {f=(b+c)/2;
  if(e==here[f])
  {a=f;
  break;}
  else if(e<f)
  {c=f-1;}
  else
  {b=f+1;}}
  if(a==-30)
  {cout<<e<<" was not found on any of the index ";}
  else
  {cout<<e<<" was found at index number "<<a;} 
}
