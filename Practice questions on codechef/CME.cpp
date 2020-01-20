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

int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n==2){
			cout<<2<<endl;
		}
		else if(n%2==0)
			cout<<0<<endl;
		else
			cout<<1<<endl;
	}
}