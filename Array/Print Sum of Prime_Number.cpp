#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum=0;
	int i,j,flag;
	for(i=1;i<=n;i++)
	{
		
		flag=1;
		for(j=2;j<=arr[i]/2;j++)
		{
			if(arr[i]%j==0)
			{
			flag=0;
			break;	
			}		
		}
		
		if(flag==1)
		{
			cout<<arr[i]<<" ";
			sum=sum+arr[i];
			
		}
	}
	
	cout<<"Print Sum of Prime Number"<<sum<<endl;
	
}
