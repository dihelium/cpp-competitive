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
    int q;
    cin>>q;
    vector<vector<string> >v;
    string o,n;
    cin>>o>>n;
    vector<string> one,two;
    one.pb(n);
    two.pb(o);
    v.pb(one);
    v.pb(two);
    FOR(i,1,q){
        string olds,news;
        cin>>olds>>news;
        int flag=0,index=0;
        FOR(j,0,v[0].size()){
            if(v[0][j]==olds)
            {
                flag=1;
                index = j;
                break;
            }
        }
        if (flag==0){
            v[0].pb(news);
            v[1].pb(olds);
        }
        else{
            v[0][index] = news;
        }
    }
    cout<<v[0].size()<<endl;
    FOR(i,0,v[0].size()){
        cout<<v[1][i]<<" "<<v[0][i]<<endl;
    }
}
