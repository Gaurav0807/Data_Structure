#include<bits/stdc++.h>
using namespace std;
int Binary_Search(int arr[],int element,int h)
{
	int l=0,end=h;
	while(l<=end)
	{
		int mid=l+(end-l)/2;
		if(arr[mid]==element)
		{
			return mid;
		}
		else if(arr[mid]<element)
		{
			l=mid+1;
		}
		else
		{
			end=mid-1;
		}
	}
	return -1;
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int a=Binary_Search(arr,7,n);
	if(a!=-1)
	{
		cout<<"Element found at"<<a<<endl;
	}
	else
	{
		cout<<"Element not Found "<<endl;
	}
}
