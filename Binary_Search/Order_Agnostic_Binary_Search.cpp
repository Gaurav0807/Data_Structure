#include<bits/stdc++.h>
using namespace std;
int Order_Agnostic(int arr[],int element,int end)
{
	int start=0;
	
	//It will check Element are in ascending order or descending order
	bool isAsc=arr[start]<arr[end];
	
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(arr[mid]==element)
		{
			return mid;
		}
	if(isAsc)
	{
		if(arr[mid]<element)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
	}
	else  
	{
		if(arr[mid]<element)
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}	
	}
	
	}
	return -1;
}

int main()
{
	int arr[]={-18,-12,-4,0,2,3,4,15,16,18,22,45,89};
	int n=sizeof(arr)/sizeof(arr[0]);
	int a=Order_Agnostic(arr,22,n);
	if(a!=-1)
	{
		cout<<"Element Found at"<<a<<endl;
	}
	else
	{
		cout<<"Element not Found"<<endl;
	}
	
}





