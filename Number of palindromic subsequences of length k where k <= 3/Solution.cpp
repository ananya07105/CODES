#include<bits/stdc++.h>
#define MAX 100
#define MAX_CHAR 26
using namespace std;
void precompute(string s,int n,int l[][MAX],int r[][MAX])
{
	l[s[0]-'a'][0]=1;
	for(int i=1;i<n;i++){
		for(int j=0;j<MAX_CHAR;j++)
		  l[j][i]+=l[j][i-1];
	l[s[i]-'a'][i]++;
	}
	r[s[n-1]-'a'][n-1]=1;
	for(int i=n-2;i>=0;i--){
		for(int j=0;j<MAX_CHAR;j++)
		  r[j][i]+=r[j][i+1];
	    
	    r[s[i]-'a'][i]++;
	}
}
int countPalindromes(int k,int n,int l[][MAX],int r[][MAX])
{
	int ans=0;
	if(k==1)
	{
		for(int i=0;i<MAX_CHAR;i++)
		  ans+=l[i][n-1];
		return ans;
	}
	if(k==2){
		for(int i=0;i<MAX_CHAR;i++)
		  ans+=((l[i][n-1]*(l[i][n-1]-1))/2);
		return ans;
		
	}
	for(int i=1;i<n-1;i++)
	  for(int j=0;j<MAX_CHAR;j++)
	    ans+=l[j][i-1]*r[j][i+1];
	return ans;
	
}
int main()
{
	string s="aabab";
	int k=2;
	int n=s.length();
	int l[MAX_CHAR][MAX]={0},r[MAX_CHAR][MAX]={0};
	precompute(s,n,l,r);
	cout<<countPalindromes(k,n,l,r)<<endl;
	return 0;
}
