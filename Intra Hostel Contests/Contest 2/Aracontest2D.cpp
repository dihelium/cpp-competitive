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
    cin>>n;
    vector<vector<int> >v;
    vector<int> p;
    FOR(i,0,n){
        p.pb(1);
    }
    v.pb(p);
    FOR(i,1,n){
        vector<int> r;
        r.pb(1);
        r.pb(1+v[i-1][1]);
        FOR(j,2,n){
            
            r.pb(v[i-1][j]+r[j-1]);
        }
        v.pb(r);
    }
    cout<<v[n-1][n-1];
}
