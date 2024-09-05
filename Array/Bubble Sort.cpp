#include<iostream>
using namespace std;
int main()
{int abc[6]={13,2,9,7,11,5};
 int temp=0;
 for(int i=0; i<=5; i++)
 for(int j=0; j<=5; j++)
 {if(abc[j]>abc[j+1])
 {temp=abc[j];
  abc[j]=abc[j+1];
  abc[j+1]=temp;}}
  cout<<"sorted array will be"<<endl;
  for(int k=0; k<=5; k++)
  {cout<<abc[k]<<endl;}}

