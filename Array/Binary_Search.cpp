#include<bits/stdc++.h>
using namespace std;

#Complexicity:- O(logn)
int Binary_Search(int arr[],int n,int n1)
{
	int start=0,end=n;
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(arr[start]==n1)
		{
			return mid;
		}
		else if(arr[start]<n1)
		{
			start=mid+1;
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
	int n1=7;
	int a=Binary_Search(arr,n,n1);
	cout<<"Element Found at :-"<<a<<endl;
}
