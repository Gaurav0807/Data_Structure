#include<bits/stdc++.h>
using namespace std;
int Binary_Search(int arr[],int n)
{
	int start=0,end=n;
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(mid>0 and mid<n)
		{
			if(arr[mid-1]<arr[mid] and arr[mid+1]<arr[mid])
			{
				return arr[mid];
			}
			else if(arr[mid-1]>arr[mid])
			{
				end=mid-1;
			}
			else
			{
				start=mid+1;
			}
		}
		else if(mid==0)
		{
			if(arr[0]>arr[1])
			{
				return arr[0];
			}
			else
			{
				return arr[1];
			}
		}
		else if(mid==n)
		{
			if(arr[n-1]>arr[n-2])
			{
				return arr[n-1];
			}
			else
			{
				return arr[n-2];
			}
		}
	}
	return arr[0];
}
int main()
{
	int arr[]={1,2,3,5,6,4,3,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	int a=Binary_Search(arr,n);
	cout<<a<<endl;
}
