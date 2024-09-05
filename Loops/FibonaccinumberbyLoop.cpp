#include<iostream>
using namespace std;
int main()
{ int number,first,second,nextnumber;
  first=0; second=1; 
  cout<<"enter a number \n";
  cin>>number;
  for(int i=0; i<number; i++)
  {cout<<first<<endl;
  nextnumber=first+second;
  first=second;
  second=nextnumber;}
}
