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
    string s;
    cin>>s;
    vector<int>v;
    FOR(i,0,n){
        string si;
        si.append(s,i,1);
        if(si=="9")
        {
            v.pb(7);
            v.pb(3);
            v.pb(3);
            v.pb(2);
        }
        else if(si=="8"){
            v.pb(7);
            v.pb(2);
            v.pb(2);
            v.pb(2);
        }
        else if(si=="7"){
            v.pb(7);
        }
        else if(si=="6"){
            v.pb(5);
            v.pb(3);
        }
        else if(si=="5"){
            v.pb(5);
        }
        else if(si=="4"){
            v.pb(3);
            v.pb(2);
            v.pb(2);
        }
        else if(si=="3"){
            v.pb(3);
        }
        else if(si=="2"){
            v.pb(2);
        }

    }
    sort(v.begin(),v.end(),greater<int>());
    FOR(i,0,v.size()){
        cout<<v[i];
    }
}