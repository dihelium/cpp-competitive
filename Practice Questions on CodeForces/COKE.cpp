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

int temp(int t, int m, int k)
{
	if(t<k-1){
		while(m>0&&t<k){
			t++;
			m--;
		}
	}
	else
		while(m>0&&t>k){
			t--;
			m--;
		}
	if(m>0)
	{
		m--;
		t = k;
	}
	return t;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector<int> v;
		int n,m,k,l,r;
		cin>>n>>m>>k>>l>>r;
		for(int i = 0;i<n;++i)
		{
			int c,p;
			cin>>c>>p;
			if(temp(c,m,k)>=l&&temp(c,m,k)<=r)
				v.pb(p);
		}
		if(v.size()==0)
			cout<<-1<<endl;
		else
			cout<<*min_element(v.begin(), v.end())<<endl;
	}
}






