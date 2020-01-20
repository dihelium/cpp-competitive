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
        vector<pair<int,int> > v;
        for(int i = 0;i<8;++i){
            pair<int,int> p = make_pair(i+1,0);
            v.push_back(p);
        }
        for(int i =0;i<n;++i){
            int p,s;
            cin>>p>>s;
            for(int j=0;j<8;++j){
                if(v[j].first==p){
                    if(v[j].second<s)
                        v[j].second = s;
                }
            }
        }
        int sum=0;
        for(int i =0;i<8;++i){
            sum+=v[i].second;
        }
        cout<<sum<<endl;
    }
}
