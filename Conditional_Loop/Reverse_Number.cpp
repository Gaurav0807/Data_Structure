#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,rem=0,a=0;
	cin>>n;
	while(n!=0)
	{
		rem=n%10;
		a=a*10+rem;
		n=n/10;
	}
	cout<<"Reverse number"<<a<<endl;
}
