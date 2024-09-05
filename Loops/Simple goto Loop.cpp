#include<iostream>
using namespace std;
int main()
{
	int b,c;
	b=1;
	top:
		cout<<"enter a number\n";
		cin>>c;
	
		if (c>=9)
		{cout<<"no. is greater than 9 or = to 9\n";}
		else
		cout<<"no. is smaller than 9\n";
		if (b<9)
        {b++;
        goto top;}
}
