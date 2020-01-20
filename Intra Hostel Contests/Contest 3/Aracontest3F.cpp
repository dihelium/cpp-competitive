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
	int n;
	string s;
	vector<int>v;
	cin>>n>>s;
	FOR(i,0,n){
		int num = s[i];
		cout<<num;
	}
}