#include<iostream>
#include<fstream>
using namespace std;
int main()
{ char a[100];
  char d[100];
  cout<<"enter your name and age"<<endl;
  cin.getline(a,100);                       //we use getline() to include whole text
  cout<<"file writting is started"<<endl;
  ofstream b("Basic2.txt");                 //("file name",ios::app) is used for overwritting in file
  //b.open("Basic2.txt");                   //this is how to open a file
  b<<a;                                     //this how to write in file
  b.close();                              //this is how to close a file
  cout<<"file writting finished"<<endl;
  cout<<"file reading strated"<<endl;
  ifstream c("Basic2.txt");
  c.getline(d,100);                         //this is how to read from file read
  cout<<a<<endl;
  c.close();
  cout<<"file reading ended"<<endl;
}
/*
fstream does input, output both
so, we have to tell it what are you here for
when we use fstream we have to declare after it wether it´s being used for input or output
fstream myfile("filename",ios::out);           //it is for output
fstream myfile("filename",ios::in);           //it is for input
normally when you use ofstream or ifstream which are used for writting to the file and reading from the file
we don´t  
*/
