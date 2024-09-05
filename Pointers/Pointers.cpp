#include<iostream>
using namespace std;
int main()
{ //pointers is a datatype which holds adresses of other datatypes
  int a=10;
  int *b=&a;
  //& ------> holds adress of operaator
  cout<<"adress of a = "<<&a<<endl;
  cout<<"adress of a = "<<b<<endl;
  //* ------> holds value derefferenced operator
  cout<<"value at the adress of a = "<<*b<<endl; 
  //pointer of a pointer 
  int **c=&b;
  // & for adresss
  cout<<"adress of b = "<<&b<<endl;
  cout<<"adress of b = "<<c<<endl;
  //* for value at adress
  cout<<"value at pointer c which is pointer of pointer b = "<<**c<<endl;}