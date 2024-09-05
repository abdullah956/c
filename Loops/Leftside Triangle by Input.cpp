#include<iostream>
using namespace std;
int main()
{int a,b,c,d;
cout<<"enter the maximum number for rows you want in your pattren";
cin>>d;
 for(a=1; a<=d; a++)
 {for(b=0; b<=a; b++)
 {c=a-b;
 if(c>0)
 {cout<<a-b;}
 }
  cout<<endl;}
}
