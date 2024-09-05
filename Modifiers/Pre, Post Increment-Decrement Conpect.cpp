#include<iostream>
using namespace std;
int main()
{ int a,b,c;
  a=2; b=11; c=0;
  c=a+(++a);
  cout<<c;
  //when ++ or -- before a variable it changes the value of that variable by +1 or -1 in the whole equation
  //in which it is used, on the other hand if ++ or -- comes after the varaible in an equation
  //it only changes the value of that variable by -1 or +1 on that certain place
}
