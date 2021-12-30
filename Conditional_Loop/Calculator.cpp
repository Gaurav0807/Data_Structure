#include<bits/stdc++.h>
using namespace std;
int main()
{
	char op;
	int num1,num2,sum=0;
	
	while(true)
	{
		cin>>op;
		if(op=='+'||op=='-'||op=='*'||op=='/')
		{
			cin>>num1;
			cin>>num2;
			if(op=='+')
			{
				sum=num1+num2;
				break;
			}
			if(op=='-')
			{
				sum=num1-num2;
				break;
			}
			if(op=='*')
			{
				sum=num1*num2;
				break;
			}
			if(op=='/')
			{
				sum=num1/num2;
				break;
			}
		}
	}
	cout<<"Output :- "<<sum<<endl;
	
}






