#include<bits/stdc++.h>
using namespace std;
#Complexicity:- O(n^2)
int main()
{
	int arr[]={12,45,23,51,19,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
