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

int main()
{
	int n,q,m;
	cin>>n>>q>>m;
	int a[n];
	vector <vector < pair<int,int> > > rem(m);
	FOR(i,0,n){
		cin>>a[i];
		pair<int,int> p;
		p.first = a[i];
		p.second = i;
		rem[a[i]%m].pb(p);
	}
	FOR(i,0,q){
		int index,remainder;
		cin>>index>>remainder;
		sort(rem[remainder].begin(),rem[remainder].end());
		pair<int, int> p = rem[remainder][index-1];
		if(rem[remainder].size()<index)
			cout<<-1<<endl;
		else
			cout<<p.second+1<<endl;
	}
	return 0;

}