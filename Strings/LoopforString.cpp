#include<iostream>
#include<string>
using namespace std;
int main()
{ string here("abdullah");
  cout<<here.at(3)<<endl;
  //this is used to point out a certain character in a string 

  for(int i=0; i<here.length(); i++) //you can putt length of a string as a limit like this
  {cout<<here.at(i);}
  //the loop used here will collect all elements one by one and will make a full word
  
  }