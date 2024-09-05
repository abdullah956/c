#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<" enter a character ";
	cin>>a;
	if (a>='A' && a<='Z')
	{cout<<" inserted character is a capital case letter\n";}
	else if (a>='a' && a<='z')
	{cout<<" inserted character is a small case letter\n"; }
    else if(a>='0' && a<='9')
    {cout<<"entered number is a digit\n";}
    else
    {cout<<"entered number is a special character\n";}
}
