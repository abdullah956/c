#include<iostream>
using namespace std;
int main()
{ int here[10]={0};
  for(int i=0; i<=9; i++)
  {cout<<"enter numbers in array\n";
  cin>>here[i];}
  int a,b,c;
  a=1; b=2; 
  for(c=0; c<=9; c++)
  {a=1; b=2; 
  while(b<=here[c]/2)
  {if(here[c]%b==0)
  a=0;
  break;}
  b++;
  if(a==1)
  {cout<<here[c]<<" ";}
  }
}