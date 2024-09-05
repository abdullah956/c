#include<iostream>
using namespace std;
struct dob{ int day; int month; int year;};
struct student{char name[20]; dob birthday;};
int main()
{ student a;
  cout<<"enter  the name of student \n";
  cin.getline(a.name,20);
  cout<<"enter the day \n";
  cin>>a.birthday.day;
  cout<<"enter the month \n";
  cin>>a.birthday.month;
  cout<<"enter the year \n";
  cin>>a.birthday.year;
  cout<<"name of student is : "<<a.name<<endl;
  cout<<"date of birth of student was on "<<a.birthday.day<<"/"<<a.birthday.month<<"/"<<a.birthday.year;}
