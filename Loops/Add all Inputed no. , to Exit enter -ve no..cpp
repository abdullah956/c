#include<iostream>
using namespace std;
int main()
{ int a,b;
  cout<<"enter numbers to exit enter any number below zero";
  for(a=1; a>=0;)
  { cin>>a;
    if(a<0)
    break;
    b=b+a;
    cout<<b;
    
  }
}
