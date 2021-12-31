#include<bits/stdc++.h>
using namespace std;
#Complexicity :- O(n)
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int n1=9,mid=0,i;
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==n1)
		{
			mid=i;
			break;
		}
	}
	cout<<"Element"<<n1<<"Found at"<<i<<endl;
}
