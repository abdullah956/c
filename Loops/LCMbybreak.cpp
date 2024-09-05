#include<iostream>
using namespace std;
int main()
{ int a,b,c,d,e,f,g,n;
  cout<<"enter two numbers you want the lcm of"<<endl;
  cin>>a;
  cin>>b;
  cin>>n;
  for(c=2; c<=a && c<=b && c<=n; c++)
  {if(a%c==0 && b%c==0 && n%c==0)
  {e=c;}break;}
  cout<<"lcm is ; "<<e;
}

