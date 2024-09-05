#include<iostream>
using namespace std;
int factorial(int n)
{ if(n<=1)
  {return 1;}
  return n*factorial(n-1);}
//recursion is just a function calling itself again n again, until the given condition
//here factorial function will just return n which for instance we take 4, but it will call itself again
//return 4*factorial(4-1)              --> here i used the formula to find factorial which is n!=n*(n-1)*(n-2)*...
//on 2nd step it will give return value 3 
//return 4*3*factorial(3-1)
//this will go until 4 becomes 0, now we know 0! & 1! is 1
//based on this, we gave this fucntion a conditon when the 'int n' which in this case 4 ,is reduced to 1 or < 1
//just return 1
//at the final step return will be 
//return 4*3*2*1*1
//you can take a look on LAB14 P4 and P5 for further understanding
int main()
{ int a,b;
  cout<<"enter a number you want the factorial of\n";
  cin>>a;
  b=factorial(a);
  cout<<"factorial of "<<a<<" is : "<<b;
}
