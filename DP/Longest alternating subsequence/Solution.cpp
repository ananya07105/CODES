#include<iostream>
using namespace std;
int max(int a,int b)
{
	return (a>b)?a:b;
}
int zzis(int arr[],int n)
{
	int las[n][2];
	for(int i=0;i<n;i++)
	  las[i][0]=las[i][1]=1;
	int res=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[j]<arr[i]&&las[i][0]<las[j][1]+1)
			  las[i][0]=las[j][1]+1;
			if(arr[j]>arr[i]&&las[i][1]<las[j][0]+1)
			  las[i][1]=las[j][0]+1;
		}
		if(res<max(las[i][0],las[i][1]))
		  res=max(las[i][0],las[i][1]);
	}
	return res;
}
int main()
{
	int arr[]={10,22,9,33,49,50,31,60};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Length of longest alternating subsequence is: "<<zzis(arr,n);
	return 0;
}
