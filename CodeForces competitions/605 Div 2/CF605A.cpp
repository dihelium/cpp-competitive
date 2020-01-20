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

long dis(long a, long b, long c){
    return abs(a-b)+abs(b-c)+abs(c-a);
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<long> u,v,w,f;
        FOR(i,0,3){
            long el;
            cin>>el;
            v.pb(el);
        }
        sort(v.begin(),v.end());
        u.pb(v[0]-1);
        u.pb(v[1]-1);
        u.pb(v[2]-1);
        w.pb(v[0]+1);
        w.pb(v[1]+1);
        w.pb(v[2]+1);
        f.pb(dis(u[0],u[1],u[2]));
        f.pb(dis(u[0],u[1],v[2]));
        f.pb(dis(u[0],u[1],w[2]));
        f.pb(dis(u[0],v[1],u[2]));
        f.pb(dis(u[0],v[1],v[2]));
        f.pb(dis(u[0],v[1],w[2]));
        f.pb(dis(u[0],w[1],u[2]));
        f.pb(dis(u[0],w[1],v[2]));
        f.pb(dis(u[0],w[1],w[2]));
        f.pb(dis(v[0],u[1],u[2]));
        f.pb(dis(v[0],u[1],v[2]));
        f.pb(dis(v[0],u[1],w[2]));
        f.pb(dis(v[0],v[1],u[2]));
        f.pb(dis(v[0],v[1],v[2]));
        f.pb(dis(v[0],v[1],w[2]));
        f.pb(dis(v[0],w[1],u[2]));
        f.pb(dis(v[0],w[1],v[2]));
        f.pb(dis(v[0],w[1],w[2]));
        f.pb(dis(w[0],u[1],u[2]));
        f.pb(dis(w[0],u[1],v[2]));
        f.pb(dis(w[0],u[1],w[2]));
        f.pb(dis(w[0],v[1],u[2]));
        f.pb(dis(w[0],v[1],v[2]));
        f.pb(dis(w[0],v[1],w[2]));
        f.pb(dis(w[0],w[1],u[2]));
        f.pb(dis(w[0],w[1],v[2]));
        f.pb(dis(w[0],w[1],w[2]));
        sort(f.begin(),f.end());
        cout<<f[0]<<endl;
    }
}
