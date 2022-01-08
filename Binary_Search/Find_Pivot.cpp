#include<bits/stdc++.h>
using namespace std;
int Binary_Search(int arr[],int element,int start,int h)
{
	int l=start,end=h;
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
int Search(int arr[],int target)
{
	int n=sizeof(arr)/sizeof(arr[0]);
	int pivot=findPivot(arr,n);
	if(pivot==-1)
	{
		return Binary_Search(arr,target,0,n);
	}
	
	if(arr[pivot]==target)
	{
		return pivot;
	}
	
	if(target>=arr[0])
	{
		return Binary_Search(arr,target,0,pivot-1);
	}
	
	return Binary_Search(arr,target,pivot+1,n);
}



int main()
{
	int arr[]={4,5,6,7,0,1,2};
	int target=0;
	cout<<Search(arr,target)<<endl;
	//cout<<arr[a]<<endl;
}
