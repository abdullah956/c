#include<iostream>
using namespace std;
int main()
{ int here[5]={0};
  int a;
  for(a=0; a<=4; a++)
  {cout<<"enter values on index ";
   cin>>here[a];}
  for(a=0; a<=4; a++)
  {if(9==here[a])
  {cout<<"9 is found at "<<a<<endl;}}
}
