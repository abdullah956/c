#include<iostream>
using namespace std;
struct marks{ float marks;};
void asdf( struct marks s[])
{
for(int b=0; b<=3; b++)
{cout<<s[b].marks<<endl;}
}
int main()
{
marks s[3]={0};
for( int i=0; i<=3; i++)
{cin>>s[i].marks;}
asdf(s);
}