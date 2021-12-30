#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a;
	cin>>a;
	if(a>=97 and a<=122) //Capital Letter ASCII Code
	{
		cout<<0;
	}
	else if(a>=65 and a<=90) //Small letter ASCII Code
	{
		cout<<1;
	}
	else
	{
		cout<<-1;
	}
}
