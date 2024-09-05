#include<iostream>
using namespace std;
float here(int a, float b)
{ 
 return a+b;
}
char here2(char e, char b)
{ return e+b;
}
int main()
{ float c;
 here(2,3.2);
 c=here(2,3.2);
  cout<<c<<endl;
  char v,f;
  here2(34,35);
  v=here2('#','¤');
  cout<<v<<endl;
  f=v+c;
  cout<<f;
}
