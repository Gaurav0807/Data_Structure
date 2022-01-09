#include<bits/stdc++.h>
using namespace std;
const int MAX = 100;
void binarySearch(int mat[][100],int row,int cStart,int cEnd,int target)
{
	while(cStart<=cEnd)
	{
		int mid=cStart+(cEnd-cStart)/2;
		if(mat[row][mid]==target)
		{
			cout<<"Found at row "<<row<<"Column "<<mid<<endl; 
			return;
		}
		if(mat[row][mid]<target)
		{
			cStart=mid+1;
		}
		else
		{
			cEnd=mid-1;
		}
	}
	cout<<"Element Not Found"<<endl;
	return;
}

void sortedMatrixSearch(int mat[][100],int n,int m,int target)
{
	if(n==1)
	{
		binarySearch(mat,0,0,m-1,target);
	}
	int i_low=0;
	int i_high=n-1;
	int j_mid=m/2;
	
	while(i_low<(i_high-1))
	{
		int mid=i_low+(i_high-i_low)/2;
		
		if(mat[mid][j_mid]==target)
		{
			cout<<"Found at ("<<mid<<" "<<j_mid<<endl;
			return;
		}
		if(mat[mid][j_mid]<target)
		{
			i_low=mid;
		}
		else
		{
			i_high=mid;
		}
	}
	
	if(mat[i_low][j_mid]==target)
	{
		cout<<"Found at ("<<i_low<<" "<<j_mid<<")"<<endl;
		return;
	}
	if(mat[i_low+1][j_mid]==target)
	{
		cout<<"Found at ("<<i_low+1<<" "<<j_mid<<")"<<endl;
		return;
	}
	
	
	if(target<=mat[i_low][j_mid-1])
	{
		return binarySearch(mat,i_low,0,j_mid-1,target);
	}
	
	
	if(target>=mat[i_low][j_mid+1] && target<=mat[i_low][m-1])
	{
		return binarySearch(mat,i_low,j_mid+1,m-1,target);
		
	}
	
	if(target<=mat[i_low+1][j_mid-1])
	{
		return binarySearch(mat,i_low+1,0,j_mid-1,target);
	}
	else
	{
		return binarySearch(mat,i_low+1,j_mid-1,m-1,target);
	}
		
}

int main()
{
    int n = 4, m = 5, x = 8;
    int mat[][100] = {{0, 6, 8, 9, 11},
                     {20, 22, 28, 29, 31},
                     {36, 38, 50, 61, 63},
                     {64, 66, 100, 122, 128}};
 
    sortedMatrixSearch(mat, n, m, x);
    return 0;
}
