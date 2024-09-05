#include<iostream>
using namespace std;
struct here{ int rolno; char stname[20]; float cgpa;};
int main()
{ here h;
  cout<<"enter details of student \n";
  /*cout<<"enter rollnumber\n";
  cin>>h.rolno;
  cout<<"enter name\n";
  cin.ignore();
  cin.getline(h.stname,20);
  cout<<"enter cgpa\n";
  cin>>h.cgpa;
  cout<<"\ndetails of student are\n";
  cout<<h.rolno<<endl<<h.stname<<endl<<h.cgpa<<endl;*/
  //normally input and output by structures is done like it is above 

  //pointers only go along side with same datatype variables. 
  //So we will create a pointer of struct datatype.
  here *p;
  p=&h;
  cout<<"enter roll no. \n";
  cin>>p->rolno;
  cout<<"enter name \n";
  cin>>p->stname;
  cout<<"enter cgpa \n";
  cin>>p->cgpa;

  cout<<"details of student are\n";
  cout<<"name : "<<p->stname<<endl;
  cout<<"roll no. : "<<p->rolno<<endl;
  cout<<"cgpa : "<<p->cgpa<<endl;
  
  //input and output in strutures with pointers is done like this   
  //do not get confused with the '->' sign after the pointer variable 'p' 
  //just us a . after p like you do wiht any other structure type variable 
  //list of datatypes variables will apper , move to the desired one and hit enter 
  //that's it arrow will appear
}