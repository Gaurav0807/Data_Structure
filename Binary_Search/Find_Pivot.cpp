#include<bits/stdc++.h>
using namespace std;
int findPivot(int arr[],int n)
{
	int start=0,end=n;
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(mid<end && arr[mid]>arr[mid+1])
		{
			return mid;
		}
		else if(mid>start && arr[mid]<arr[mid-1])
		{
			return mid-1;
		}
		else if(arr[mid]<=arr[start])
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
	}
	return -1;
}
int main()
{
	int arr[]={4,5,6,7,0,1,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	int a=findPivot(arr,n);
	cout<<arr[a]<<endl;
}
