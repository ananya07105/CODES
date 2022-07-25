#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int count =0;
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    for(int i=0; i<n; i++)
	    {
	        if(arr[i]<8 && arr[i]>0)
	        {
	            count++;
	            if (count == 7)
	            {
	                cout<<i+1<<endl;
	                break;
	            }
	        }
	    }
	}
	return 0;
}
