#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={12,45,23,51,19,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i,j,curr;
	for(int i=1;i<n;i++)
	{
		curr=arr[i];
		j=i-1;
		while(arr[j]>curr & j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=curr;
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
