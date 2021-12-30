#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count,rem=0;
	cin>>n;
	count=0;
	while(n>0)
	{
		rem=n%10;
		if(rem==6)
		{
			count++;
		}
		n=n/10;
	}
	
	cout<<"Occurence of 6 :-"<<count<<endl;
}
