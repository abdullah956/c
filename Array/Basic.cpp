#include<iostream>
using namespace std;
int main()
{ int here[5]={0};
  int i;
  for(i=0; i<=5; i++)
  {cout<<"enter values for index "<<endl;
   cin>>here[i];}
   cout<<"values in index from 0 to 5 are"<<endl;
  for(i=0; i<=5; i++)
  {cout<<here[i]<<endl;}
   cout<<"respectively"<<endl;
   cout<<"enter the number of index you want the value of";
   cin>>i;
   cout<<here[i];
}
