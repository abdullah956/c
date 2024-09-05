#include<iostream>
using namespace std;
int main()
{int here[5]={0};
 int a=0;
 cout<<"enter numbers in array\n";
 for(int i=0; i<=4; i++)
 {cin>>here[i];}
 cout<<"value in first index "<<here[0]<<endl;
 cout<<"value in last index "<<here[4]<<endl;
 a=here[0];
 here[0]=here[4];
 here[4]=a;
 cout<<"value in first index after swapping "<<here[0]<<endl;
 cout<<"value in last index after swapping "<<here[4]<<endl;

}