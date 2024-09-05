#include<iostream>
#include<string>
using namespace std;
struct  here
{string a; };
int main()
{ here b;
  cout<<"enter  a name\n";
  getline(cin,b.a);
  cout<<"name is : \n";
  cout<<b.a<<endl;}