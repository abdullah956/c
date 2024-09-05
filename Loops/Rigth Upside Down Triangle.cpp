#include<iostream>
using namespace std;
int main()
{ int a,b,c;
  for(a=5; a>=1; a--)
  {for(b=5-a; b>0; b--)
  {cout<<" ";}
   for(c=a; c>=1; c--)
  {cout<<"*";} 
  cout<<endl;
}  
}
