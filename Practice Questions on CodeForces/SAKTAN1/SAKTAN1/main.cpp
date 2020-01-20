#include<iostream>
#include<vector>
#include<string>
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
        long n,m,q;
        cin>>n>>m>>q;
        vector< pair<long, long> > v;
        FOR(i,0,q){
            long x,y;
            cin>>x>>y;
            pair<long, long> p = make_pair(x,y);
            v.pb(p);
        }
        long count = 0;
        std::vector<std::vector<bool> > mat;
        mat.resize(n, std::vector<bool>(m, 0));
        FOR(i,0,q){
            FOR(j,0,n)
                mat[v[i].first-1][j] = !mat[v[i].first-1][j];
            FOR(j,0,m)
                mat[j][v[i].second-1] = !mat[j][v[i].second-1];
        }
        FOR(i,0,n){
            FOR(j,0,m)
            {
                if(mat[i][j]==1){
                    count++;
                }
            }
        }
        cout<<count<<endl;

    }
}
