#include<iostream>
using namespace std;
int ls(int arr[],int n,int x){
	int res;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		  {
		    res=i;
		    break;}
	}
	return res;
}
int main()
{
	int arr[]={5,9,12,20,25};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<ls(arr,n,12);
	return 0;
}
