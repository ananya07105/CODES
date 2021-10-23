#include<bits/stdc++.h>
using namespace std;
int MCM(int p[],int i,int j)
{
	if(i==j)
	  return 0;
	int k;
	int min=INT_MAX;
	int count;
	for(k=i;k<j;k++)
	{
		count=MCM(p,i,k)+MCM(p,k+1,j)+p[i-1]*p[k]*p[j];
		if(count<min)
		  min=count;
	}
	return min;
}
int main()
{
	int arr[]={1,2,3,4,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Min number of multiplication is: "<<MCM(arr,1,n-1);
}
