#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={0,0,1,1,1,2,2,3,3,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	//sort(arr,arr+n);
	int j=0;
	for(int i=1;i<n;i++)
	{
		if(arr[j]!=arr[i])
			j++;
		arr[j]=arr[i];
	}
	cout<<"After Duplicate"<<j<<endl;
	for(int i=0;i<j;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
	
}
