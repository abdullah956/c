#include<iostream>
using namespace std;
enum colors{ red=7, black, green, blue, yellow=14};
enum c{ pink, purple, orange};
int main()
{ colors a;
  c b;
  a=red;
  cout<<a<<endl;
  a=yellow;
  cout<<a<<endl;
  a=black;
  cout<<a<<endl;
  a=green;
  cout<<a<<endl; 
  b=pink;
  cout<<b<<endl;
  b=orange;
  cout<<b;
}
