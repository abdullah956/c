#include<iostream>
using namespace std;
int main()
{ int a,b,c,d,e,f,g;
  cout<<"enter two numbers you want the HCF of"<<endl;
  cin>>a;
  cin>>b;
  for(c=1; c<=a && c<=b; c++)
  {if(a%c==0 && b%c==0)
  {e=c;}}
  cout<<"hcf is ; "<<e;
}
