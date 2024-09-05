#include<iostream>
using namespace std;
int main()
{
	int w,l,b,h,r,c;
	const float pi=3.14;
    cout<<"enter \n 1 for area of rectangle \n 2 for area of circle \n 3 for area of triangle \n 4 for volume of cylinder \n 5 for volume of sphere";
    cin>>c;
	switch (c)
	{ case 1:
	cout<<"enter width";
	cin>>w;
	cout<<"enter length";
	cin>>l;
	cout<<"area of a rectangle is "<<w*l<<endl;
	break;
	case 2:
	cout<<"enter radius";
	cin>>r;
	cout<<"area of a circle is "<<pi*r*r<<endl;
	break;
	case 3:
	cout<<"enter base";
	cin>>b;
	cout<<"enter height";
	cin>>h;
	cout<<"area of a triangle is "<<(h*b)/2<<endl;
	break;}
	switch (c)
	{case 4:
	cout<<"enter radius";
	cin>>r;
	cout<<"enter height";
	cin>>h;
	cout<<"volume of cylinder is "<<pi*r*h<<endl;
	break;
	case 5:
	cout<<"enter radius";
	cin>>r;
	cout<<"volume of sphere is "<<(4/3)*pi*r*r*r<<endl;
	break;}
}
