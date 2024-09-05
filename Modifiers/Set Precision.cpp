#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	float a;
	cout<<"enter value";
	cin>>a;
	cout<<"enter precision in number ";
	cin>>n;
	char c;
	cout<<"enter character";
	cin>>c;
	int f;
	cout<<"enter how many spaces you want with the character including the number you have entered";
	cin>>f;
	cout<<setprecision(n)<<setw(f)<<left<<setfill(c)<<a;
	//setw() used for print the amount of same character you wanna print again n again
	//setfill('character') used for printing a character
	// before using it use left/right to determine the direction of your print 
	//setprecision used for precision 
	//setw() used for print the amount of same character you wanna print again n again
}
