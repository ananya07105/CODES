#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int b;
        cin>>n;
        int even=0,odd=0;
        for(int i=0;i<n;i++)
        {
            cin>>b;
            if(b%2==0)
              even++;
            else
              odd++;
        }
        if(((even%2==0)&&(odd%2!=0))||((even%2!=0)&&(odd%2!=0)))
          cout<<"2"<<endl;
        else
          cout<<1<<endl;
        
        
    }

	// your code goes here
	return 0;
}
