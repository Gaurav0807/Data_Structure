#include<bits/stdc++.h>
using namespace std;

void swapping(int arr[],int first,int second)
{
	int temp=arr[first];
	arr[first]=arr[second];
	arr[second]=temp;
}

int Duplicates(int arr[],int n)
{
	int i=0;
	while(i<n)
	{
		if(arr[i]!=i+1)
		{
			int curr=arr[i]-1;
			if(arr[i]!=arr[curr])
			{
				swapping(arr,i,curr);
			}
			else
			{
				return arr[i];
			}
		}
		else
		{
			i++;
		}
	}
	return -1;
}
int main()
{
	int arr[]={1,2,3,4,5,6,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int a=Duplicates(arr,n);
	cout<<"Duplicates elements :-"<<a<<endl;
}
