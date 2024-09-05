#include<iostream>
using namespace std;
int aa(int x, int y, int z)
{ cout<<"enter numbers";
  cin>>x>>y;
  return x+y;
}
float tt(int d, float e,int f=2)
{ return d*e*f;
}
char cc(char k,char l)
{  return l-k;
}
char nn(char h, char j, float& u)
{ cout<<"enter a character";
  cin>>h>>j;
  u=h+j;
  return u;
}
int main()
{ int a,b,c;
  float e,f,g,d;
  c=aa(a,b,c);
  cout<<c<<endl;
  g=tt(1,5);
  cout<<g<<endl;
  char k,l,m;
  m=cc(23,34);
  cout<<m;
  float u,i;
  char v,o;
  nn(v,o,u);
  i=u;
  cout<<i<<endl;
}
