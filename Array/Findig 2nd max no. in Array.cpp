#include<iostream>
using namespace std;
int main()
{ int i,j;
  int here[7]={2,6,5,67,11,8,4};
  int k,l;
  k=here[0]; l=here[0];
  for(i=0; i<=6; i++)
  {if(here[i]>k)
  {k=here[i];}}
  cout<<"max number is "<<k<<endl;
  for(i=0; i<=6; i++)
  {if(here[i]>k)
  {l=k;
  k=here[i];}}
  for(i=0; i<=6; i++)
  {if(here[i]<k && here[i]>l)
  {l=here[i];}}
  cout<<"second highest number is "<<l;}
