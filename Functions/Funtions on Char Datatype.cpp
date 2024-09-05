#include<iostream>
using namespace std;
char ch(char t, char g,char &d)
{ cout<<"enter characters";
  cin>>t>>g;
  d=t+g;
  return d;
}
int main()
{ char a,f,b,c;
  f=ch(a,b,c);
  cout<<c<<f;
}
