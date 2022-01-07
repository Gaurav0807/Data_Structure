#include<bits/stdc++.h>
#include<vector>
using namespace std;
int Binary_Search(int arr[],int n,int target,string str)
{
	int start=0,end=n;
	int ans=-1;
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		
		if(target<arr[mid])
		{
			end=mid-1;
		}
		else if(target>arr[mid])
		{
			start=mid+1;
		}
		else
		{
			ans=mid;
			if(str=="FIRST")
			{
				end=mid-1;
			}
			else
			{
				start=mid+1;
			}
		}
	}	
	return ans;
}


vector<int> search(int arr[],int target)
{
	int n=sizeof(arr)/sizeof(arr[0]);
	
	
	return {Binary_Search(arr,n,target,"FIRST"),Binary_Search(arr,n,target,"LAST")};
	
}

int main()
{
	int arr[]={5,7,7,8,8,10};
	search(arr,8);
	
}
