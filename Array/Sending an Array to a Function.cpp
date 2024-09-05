#include<iostream>
using namespace std; 
void print(int array[], int size)
{for(int x=0; x<size; x++)
{cout<<array[x]<<endl;
}
}
int main()
{ int bus[3]={34,4,5};
  print(bus,3);
}
