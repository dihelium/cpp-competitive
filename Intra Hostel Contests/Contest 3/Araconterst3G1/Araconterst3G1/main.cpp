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
vector<vector<int> > v;
long long power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

vector<int> vectorplace(vector<int> s,int lr,int num){
    vector<int> t;
    int index = 0;
    int max = s[0];
    FOR(i,0,s.size()){
        if(max<s[i]){
            max = s[i];
            index = i;
        }
    }
    if(lr==0){
        FOR(i,0,index+1){
            t.pb(s[i]);
        }
        t.pb(num);
        FOR(i,index+1,s.size()){
            t.pb(s[i]);
        }
        
    }
    else{
        FOR(i,0,index){
            t.pb(s[i]);
        }
        t.pb(num);
        FOR(i,index,s.size()){
            t.pb(s[i]);
        }
    }
    return t;
}

int main() {
    vector<int>p;
    p.pb(1);
    v.pb(p);
    int n;
    long long k;
    cin>>n>>k;
    vector<int> k_place;
    long long maxk = power(2,n-1);
    FOR(i,0,n-1){
        if(1<=k&&k<=maxk/2)
            {k_place.pb(0);}
        else
            {k_place.pb(1);
             k = k-maxk/2;
            }
        
        maxk = maxk/2;
    }
    FOR(i,0,n-1){
        vector<int> w = vectorplace(v[i],k_place[i],i+2);
        v.pb(w);
    }
    
    FOR(i,0,v[v.size()-1].size()){
        cout<<v[v.size()-1][i]<<" ";
    }
    
}
