#include<iostream>
using namespace std;
int main()
{ int a,b,c,d,e,f,g,h;
  int here[2][4];
  int here2[2][4];
  cout<<"enter numbers on first 2D array"<<endl;
  for(a=0; a<=1; a++)
  {for(b=0; b<=3; b++)
  {cin>>here[a][b];}}
  cout<<"enter values on second 2D array"<<endl;
  for(a=0; a<=1; a++)
  {for(b=0; b<=3; b++)
  {cin>>here2[a][b];}}
  cout<<"first 2D array :"<<endl;
  for(a=0; a<=1; a++)
  {for(b=0; b<=3; b++)
  {cout<<here[a][b]<<" ";}}
  cout<<endl;
  cout<<"second 2D array :"<<endl;
  for(a=0; a<=1; a++)
  {for(b=0; b<=3; b++)
  {cout<<here2[a][b]<<" ";}}
  cout<<endl;
  cout<<"multiplication of both 2D array is :"<<endl;
  for(a=0; a<=1; a++)
  {for(b=0; b<=3; b++)
  {cout<<"here["<<a<<"]["<<"["<<b<<"] * here2["<<a<<"]["<<b<<"] = "<<here[a][b]*here2[a][b]<<endl;}}}
