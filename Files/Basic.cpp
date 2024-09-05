#include<iostream>
#include<fstream>
/*
the useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstream
3. ofstream --> derived from fstream

ofstream is a write operation, to write in files
ifstream is a read operation, used to read in files

in order to work with files in C++, you have to open it.
Primarily, there are 2 ways to open a file:
1. using constructor
2. using the member of function open() of the class
*/

using namespace std;
int main()
{ //opening files using constructor and writting it
  string a="Abdullah Arshed";  
  string b;                            
  ofstream out("Basic write file.txt");            //you can putt any name in place of 'out'
  out<<a;                                          //you can use this to write in file
  
  //opening files using constructor and reading it
  ifstream in("Basic read file.txt");              //you can putt any name in place of 'in'
  getline(in,b);
  //in>>b; 
  cout<<b;                                         //you can use this to write a file
}
