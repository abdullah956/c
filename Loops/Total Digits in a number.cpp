#include<iostream>
using namespace std;
int main()
{ int a,b;
  cout<<"enter a number ";
  cin>>a;
  b=0;
  while(a>0)
  {a=a/10;
   b++;}  
   cout<<"digits in the number you enteredd are "<<b;
}
