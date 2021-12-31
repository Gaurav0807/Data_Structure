#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	bool is_prime=true;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			is_prime=false;
			break;
		}
	}
	
	cout<<"Is Prime Number"<<is_prime<<endl;
}
