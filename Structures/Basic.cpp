#include<iostream>
using namespace std;
struct student
{ char name[20];
  int age;
  float cgpa;
  char address[50];};
int main()
{ student s[2]={0};
  cout<<"enter names of students"<<endl;
  cin.getline(s[0].name,20);
  cin.getline(s[1].name,20);
  cout<<"enter adresses of students "<<endl;
  cin.getline(s[0].address,50);
  cin.getline(s[1].address,50);
  cout<<"enter age of students "<<endl;
  cin>>s[0].age>>s[1].age;
  cout<<"enter cgpa of students "<<endl;
  cin>>s[0].cgpa>>s[1].cgpa;
  cout<<"details of students are "<<endl;
  cout<<"first student "<<endl;
  cout<<s[0].name<<endl<<s[0].address<<endl;
  cout<<s[0].age<<endl<<s[0].cgpa<<endl;
  cout<<"secound sstudent "<<endl;
  cout<<s[1].name<<endl<<s[1].address<<endl;
  cout<<s[1].age<<endl<<s[1].cgpa<<endl;}
