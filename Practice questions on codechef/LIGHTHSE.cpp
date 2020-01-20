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



int main(){
	std::vector<pair<int, pair<int, int>> > v;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i = 0;i<n;++i)
		{
			pair<int, int> p;
			pair<int, pair<int, int> >q;
			q.first = i;
			cin>>p.first>>p.second;
			q.second = p;
			v.push_back(q);
		}
		./
	}
}