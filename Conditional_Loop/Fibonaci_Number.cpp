#include<bits/stdc++.h>
using namespace std;
int main()
{
	//Fibonaci Number
	int a,b,n,c=0;
	
	cout<<"How many number you want to print in fibonaic Series:-"<<endl;
	cin>>n;
	a=0;b=1;
	cout<<a<<endl;
	cout<<b<<endl;
	c=a+b;
	for(int i=3;i<=n;i++)
	{
		cout<<c<<endl;
		a=b;
		b=c;
		c=a+b;
	}
	
}
