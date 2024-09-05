#include<iostream>
using namespace std;
int main()
{ int here[5]={77,9,8,0,9};
  int *p[5];  
  
  //this is just another way to find values and addresses of indexs in array using pointers
  for(int i=0; i<=4; i++)
  {p[i]=&here[i];}

  cout<<"values are\n";
  for(int i=0; i<=4; i++)
  {cout<<*p[i]<<endl;}

  cout<<"addresses are\n";
  for(int i=0; i<=4; i++)
  {cout<<p[i]<<endl;}

}