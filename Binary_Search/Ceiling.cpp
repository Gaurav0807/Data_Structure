#include<bits/stdc++.h>
using namespace std;
int Ceiling(int arr[],int n,int target)
{
	int start=0;
	int end=n;
	int res=0;
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(arr[mid]<target)
		{
			start=mid+1;
		}
		else if(arr[mid]>target)
		{
			end=mid-1;
		}
		else
		{
			return mid;
		}
	}
	return start;//for ceiling
	//return end //for floor
}

int main()
{
	//Ceiling :- greater than or equal to target
	//if you want to find 15 then simply print 16
	int arr[]={2,3,5,9,14,16,18};
	int n=sizeof(arr)/sizeof(arr[0]);
	int target=15;
	int a=Ceiling(arr,n,target);
	cout<<arr[a]<<endl;
}
