#include<iostream>
using namespace std;
int bs(int arr[],int n,int x){
	int low=0,high=n-1,res;
	while(low<high)
	{
		int mid=low+high/2;
		if(x==arr[mid])
		    res=mid;
		if(x>arr[mid])
		   low=mid+1;
		else
		   high=mid-1;
	}
	return res;
}
int main()
{
	int arr[]={5,9,12,20,25};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<bs(arr,n,12);
	return 0;
}
