#include<iostream>
#include<fstream>
using namespace std;
int main()
{ ofstream a("Basic3.txt");
  if(a.is_open())
  {a<<"ABDULLAH ARSHED\n";}
  else
  {cout<<"man you fell off\n";}
}
