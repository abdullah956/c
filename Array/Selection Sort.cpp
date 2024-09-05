#include<iostream>
using namespace std;
int main()
{ int abc[6]={11,10,13,15,14,9};
int temp;
for(int i=0; i<6; i++)
for(int j=i+1; j<6; j++)
{if(abc[i]<abc[j])
{temp=abc[i];
 abc[i]=abc[j];
 abc[j]=temp;}}
 cout<<"SORTED ARRAY WILL BE"<<endl;
 for(int i=0; i<6; i++)
 cout<<abc[i]<<endl;}
