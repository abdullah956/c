#include<iostream>
using namespace std;
int main()
{ int arr[5] = {11,12,13,14,16};
int n,mid,start=0,end=4,loc=-1;
cout<<"enter num to search";
cin>>n;
while(start<=end)
{
mid=(start+end)/2;
if(arr[mid] == n)
{ loc = mid;
break;
}
else if(n<arr[mid])
end = mid-1;
else
start = mid+1;
}
if(loc == -1)
cout<<n<<" not found";
else
cout<<n<<" found at index"<<loc;
}
