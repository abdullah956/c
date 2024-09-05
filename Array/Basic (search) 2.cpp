#include<iostream>
using namespace std;
int main()
{char d,here[5]={0};
 int a;
 for(a=0; a<=4; a++)
 {cout<<"enter characters on index ";
  cin>>here[a];}
 for(a=0; a<=4; a++)
 {if('d'==here[a])
 {cout<<"d is found at index "<<a;}}
}
