#include <iostream>
using namespace std;

int main() {
    long sum,c;
    int t,n,input;
    cin>>t;
    while(t--)
    {
       cin>>n>>c;
       sum=0;
       for(int i=0;i<n;i++)
       { 
           cin>>input;
           sum+=input;
           
       }
       if(sum<=c)
         cout<<"Yes\n";
       else
         cout<<"No\n";
       
    }
	// your code goes here
}
