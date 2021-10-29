#include<iostream>
#include<string.h>
#define CHAR 256
using namespace std;
bool isAnagram(const string &s1,const string &s2)
{
	if(s1.length()!=s2.length())
	   return false;
	int count[CHAR]={0};
	for(int i=0;i<s1.length();i++)
	{
		count[s1[i]]++;
		count[s2[i]]--;
	}
	for(int i=0;i<CHAR;i++)
	{
		if(count[i]!=0)
		  return false;
		return true;
	}
	
}
int main()
{
	string s1="LISTEN";
	string s2="SILENT";
	int m=s1.length();
	int n=s2.length();
	isAnagram(s1,s2)?cout<<"Yes, s2 is anagram of s1":cout<<"No, s2 is not an anagram of s1";
}
