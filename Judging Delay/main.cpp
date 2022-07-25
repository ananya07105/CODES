#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,ans=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int si,ji;
            cin>>si>>ji;
            int x=ji-si;
            if(x>5)
              ans++;
        }
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}
