#include<bits/stdc++.h>
using namespace std;
int dp[2000][2000];
int lcs(string s1,string s2,int i,int j)
{
	if(i>=(s1.size())||j>=(s2.size()))
	  return 0;
	if(s1[i]==s2[j])
	{
		dp[i][j]=1+lcs(s1,s2,i+1,j+1);
	}
	if(dp[i][j]!=-1)
	{
		return dp[i][j];
	}
	else
	  dp[i][j]=max(lcs(s1,s2,i,j+1),lcs(s1,s2,i+1,j));
	return dp[s1.size()-1][s2.size()-1];
}
int main()
{
	string s1="abgcba";
	string s2="abcba";
	int i=0,j=0;
	memset(dp,-1,sizeof(dp));
	cout<<"Minimum number of deletions: "<<(s1.size())-lcs(s1,s2,0,0)<<endl;
	
}
