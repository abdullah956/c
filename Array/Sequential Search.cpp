#include<iostream>
using namespace std;
int main()
{ int arr[5]={45,34,22,33,11};
  int c,a,b;
  b=-1,
  cout<<"enter the value you wanna know if it is in the arry or not";
  cin>>c;
  for(a=0; a<=4; a++)
  {if(arr[a]==c)
   {b=a;}}
   if(b==1)
   {cout<<"number was not found in the arry "<<endl;}
   else;
   cout<<"the number you wanted to find is present at index number "<<b<<endl;
   }


