#include<iostream>
#include<string>  //gives string function 
using namespace std;
int main()
{ string here ("abdullah arshed"); 
  //just another way of initializing a string,
  //for same purpose you can use '=' but then don't use the brackets
  string here1;
  string here2;

  here1=here;
  here2.assign(here);
  //these do the same job, use '=' if you like or use second method

  cout<<here<<endl<<here1<<endl<<here2<<endl;

  }
