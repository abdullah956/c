#include<iostream>
using namespace std;
union student { int age; float percent;};
int main()
{ student a;
  cout<<"enter age of student\n";
  cin>>a.age;       //a.age=20;
  cout<<a.age<<"\n";
  cout<<"enter precentage of stduent\n";
  cin>>a.percent;   //a.percent=90;
  cout<<a.percent<<"\n";
  //union keeps the recent initialized/inputed value in memory and deletes the previously intialized/inputed values 
  cout<<"age of student is : "<<a.age<<endl;  //it will give us some random garbage value
  cout<<"percentage of stduent : "<<a.percent<<endl;
}
