#include<iostream>
using namespace std;
int main()
{ int here[5];
  int *p;
  cout<<"enter numbers in array\n";
  for(int i=0;i<=4; i++)
  {cin>>here[i];}
  p=&here[0];
  cout<<"addresses of all elements in array in orignal order\n";
  for(int i=0; i<=4; i++)
  {cout<<p++<<endl;}  // here *p will show values on address of elements in array
  p=&here[4];          // here p alone will show address on elements in array
  cout<<"addresses of all the element in array in reverse order\n";
  for(int i=0; i<=4; i++)
  {cout<<p--<<endl;}
  p=&here[0];
  cout<<"values of all elements in array in orignal order\n";
  for(int i=0; i<=4; i++)
  {cout<<*p++<<endl;}  // here *p will show values on address of elements in array
  p=&here[4];          // here p alone will show address on elements in array
  cout<<"values of all the element in array in reverse order\n";
  for(int i=0; i<=4; i++)
  {cout<<*p--<<endl;}
  }