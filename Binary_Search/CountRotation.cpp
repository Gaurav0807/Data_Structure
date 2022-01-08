#include<bits/stdc++.h>
using namespace std;
int Pivot(int arr[],int n)
{
	int l=0,h=n;
	while(l<=h)
	{
		int mid=l+(h-l)/2;
		if(mid<h && arr[mid]>arr[mid+1])
		{
			return mid;
		}
		else if(mid>l && arr[mid]<arr[mid-1])
		{
			return mid-1;
		}
		else if(arr[mid]<=arr[l])
		{
			h=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	return -1;
}
int CountRotation(int arr[],int n)
{
	int a=Pivot(arr,n);
	return a+1;
}

int main()
{
	int arr[]={4,5,6,7,0,1,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<CountRotation(arr,n-1)<<endl;
}
