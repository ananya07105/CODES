#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,p1,p2,winner,temp,maxScore=0,ans=0,si=0,ti=0;
	cin>>n;
	while(n--)
	{
	    cin>>p1>>p2;
	    si=si+p1;
	    ti=ti+p2;
	    if(si>ti)
	    {
	        ans=si-ti;
	        temp=1;
	   
	    }
	    else{
	        ans=ti-si;
	        temp=2;
	        
	    }
	    if(ans>maxScore){
	        maxScore=ans;
	        winner=temp;
	    }
	    
	}
	cout<<winner<<" "<<maxScore;
	
	
	return 0;
}
