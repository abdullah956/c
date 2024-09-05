#include<iostream>
using namespace std;
int main()
{ int here[5]={14,21,32,41,52};
  int *p=here;
  cout<<"values at indexs are\n";
  cout<<*p<<endl;           
  //when we give pointer to the name of array just name no brackets no indexs are used
  //*p here will give value at first index , p alone will give the address of first index 
  cout<<*(p+1)<<endl;   //you can asscess the next index values like this 
  cout<<*(p+2)<<endl;   // * for values at address
  
  cout<<"addresses of indexs are\n";
  cout<<p<<endl;
  cout<<(p+1)<<endl;    //you can asscess the next index adresses like this 
  cout<<(p+2)<<endl;    // p alone for address

  // to access the addresses or value of indexs in array more efficiently you can use a loop like this
  cout<<"values of all indexs are : \n";
  for(int i=0; i<=4; i++)   
  {cout<<*p++<<endl;}                   
  //++ after p is a post increment means it wil adds one in p on every step
  //this is more efficient method than doing +1,+2,+3 like we did before
  cout<<"addresses  of all indexs are : \n";
  for(int i=0; i<=4; i++)
  {cout<<p++<<endl;}

}                      