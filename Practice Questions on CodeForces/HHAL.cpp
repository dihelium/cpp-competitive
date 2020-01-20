#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<cstdio>
#include<map>
#include<cassert>
using namespace std;

#define FOR(i,a,b) for(int i = a; i < b; ++i)
#define pb push_back
const int MOD = 1000000007;

typedef long long int int64;

bool palindrome(string s) 
{ 
    // Initialise flag to zero. 
    bool flag = 1; 
  
    // Loop till array size n/2. 
    for (int i = 0; i <= s.length()/2 && s.length() != 0; i++) { 
  
        // Check if first and last element are different 
        // Then set flag to 1. 
        if (s[i] != s[s.length() - i - 1]) { 
            flag = 0;
            break; 
        } 
    } 
    return flag;
  
} 

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if(palindrome(s)==1)
			cout<<1<<endl;
		else
			cout<<2<<endl;
	}
	return 0;
}