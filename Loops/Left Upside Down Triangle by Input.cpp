#include<iostream>
using namespace std;
int main()
{ int i,j,k,l,a,b;
cout<<"enter the limit of rows you want";
cin>>l;
cout<<"enter the number of row/columns";
cin>>a;
  for(i=0; i<=l-1; i++)
  { for(j=a; j>i; j--)
    { cout<<"*";
	}cout<<endl;
  }
}
