#include<bits/stdc++.h>
using namespace std;
#Complexicity:- O(n^2)
int main()
{
	int arr[]={12,45,23,51,19,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	int counter=1;
	while(counter<n)
	{
		for(int i=0;i<n-counter;i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		counter++;
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
