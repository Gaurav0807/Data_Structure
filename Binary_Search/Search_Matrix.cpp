#include<bits/stdc++.h>
using namespace std;
bool Search(int arr[100][100],int r,int c,int target)
{
	int a=0;
	int b=c-1;
	while(a<c and b>=0)
	{
		if(arr[a][b]==target)
		{
			return true;
		}
		else if(arr[a][b]<target)
		{
			a++;
		}
		else
		{
			c--;
		}
	}
	return false;
}
int main()
{
	int r,c;
	cin>>r>>c;
	int arr[100][100];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	cout<<"Print Matrix"<<endl;
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	bool a=Search(arr,r,c,6);
	cout<<a<<endl;
}
