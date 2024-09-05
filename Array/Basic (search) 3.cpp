#include<iostream>
using namespace std;
int main()
{ int a,b,c;
  int arr[3]={0};
  for(a=0; a<=2; a++)
  {cout<<"enter numbers on index ";
   cin>>arr[a];}
  for(a=0; a<=2; a++)
  {cout<<arr[a]<<endl;}
  b=arr[2];
  cout<<b<<endl;
  for(a=0; a<=2; a++)
  {if(2==arr[a])
  {cout<<" 2 was found at index "<<a;}}   
} 
