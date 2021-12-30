#include<bits/stdc++.h>
using namespace std;
int main()
{
	int start,end,i,j;
	cin>>start>>end;
	int flag;
	for(i=start;i<=end;i++)
	{
		if(i==1 || i==0)
			continue;
		flag=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
			cout<<i<<endl;
	}
}
