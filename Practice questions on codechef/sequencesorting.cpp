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
		int n;
		cin>>n;
		vector<int> v;
		std::vector<int>::iterator it;
		for(int i =0;i<n;++i){
			int el;
			cin>>el;
			it = find(v.begin(),v.end(),el);
			if(it==v.end()){
				v.pb(el);
			}
		}
		cout<<v.size()<<endl;
	}
}