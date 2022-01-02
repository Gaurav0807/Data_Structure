#include<bits/stdc++.h>
using namespace std;
void swapping(int arr[],int first,int second)
{
	int temp=arr[first];
	arr[first]=arr[second];
	arr[second]=temp;
}
int main()
{
	int arr[]={3,0,1,7,5,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	while(i<n)
	{
		int correct=arr[i];
		if(arr[i]<n && arr[i]!=arr[correct])
		{
		swapping(arr,i,correct);	
		} 
		else
		{
			i++;	
		}
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=i)
		{
			cout<<i<<endl;
			break;
		}
	}
	
	
}
