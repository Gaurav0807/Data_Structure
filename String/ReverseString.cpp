#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str="Gaurav";
	int l=str.length();
	for(int i=0;i<l/2;i++)
	{
		swap(str[i],str[l-i-1]);
	}
	
	cout<<"Reverse String "<<str<<endl;
}
