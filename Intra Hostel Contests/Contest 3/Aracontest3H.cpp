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
    int n,k;
    cin>>n>>k;
    vector<int> v;
    FOR(i,0,n){
        int el;
        cin>>el;
        v.pb(el);
    }
    
    if(*max_element(v.begin(),v.end())-*min_element(v.begin(),v.end())>k){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        int mini = *min_element(v.begin(),v.end());
        FOR(i,0,v.size()){
            if(v[i]==mini){
                FOR(j,0,mini){
                    cout<<1<<" ";
                }
                cout<<endl;
            }
            else{
                FOR(j,0,mini){
                    cout<<1<<" ";
                }
                FOR(k,0,v[i]-mini){
                    cout<<k+1<<" ";
                }
                cout<<endl;
            }
        }
    }
}
