#include <iostream>
using namespace std;
int Binary_search(int arr[],int key,int start,int end)
{
    while(start<=end)
    {
        int mid=start+(mid-start)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}

int Binary(int arr[],int key)
{
    int l=0;
    int h=1;
    int val=arr[0];
    
    while(val<key)
    {
        l=h;
        h=h*2;
        val=arr[h];
    }
    return Binary_search(arr,key,l,h);
}


int main() {
	int arr[]={1,2,3,4,5,6,7,8,99,100};
	int target=99;
	int a=Binary(arr,target);
	if(a==-1)
	{
	    cout<<"Not Found"<<endl;
	}
	else
	{
	    cout<<"Value found at"<<a<<endl;
	}
}
