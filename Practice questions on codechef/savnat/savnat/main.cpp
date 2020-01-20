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

bool Desc(pair<long long,int>p1, pair<long long,int>p2)
{
    return (p1.first>p2.first);
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector< pair<long long, int> > v;
        for(int i = 0;i<n;++i){
            long long el;
            cin>>el;
            pair<long long, int> p;
            p = make_pair(el,0);
            v.pb(p);
        }
        int x,y,a,b;
        cin>>x>>a>>y>>b;
        long long k;
        cin>>k;
        

    }
}
