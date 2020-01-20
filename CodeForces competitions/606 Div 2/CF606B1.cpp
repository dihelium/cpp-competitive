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

long long twopower(long long num){
    long long q=num,r=0,count=0;
    q = num/2;
    r = num%2;
    while(q>0&&r==0){
        r = q%2;
        q = q/2;
        count++;
    }
    return count;
}

bool factor(vector<long long> vec,long long l){
    
    FOR(i,0,vec.size()){
        if(vec[i]>l){
            if(pow(2,twopower(vec[i]/l))*l==vec[i])
                return true;
        }
    }
    return false;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> v,p,po;
        long long el;
        FOR(i,0,n){
            cin>>el;
            vector<long long>::iterator it;
            it = std::find(v.begin(),v.end(),el);
            if(it==v.end()){
                v.pb(el);
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        FOR(i,0,v.size()){
            if(!factor(p,v[i])){
                p.pb(v[i]);
            }
        }
        FOR(i,0,p.size()){
            po.pb(twopower(p[i]));
        }
        
        long long count=0;
        FOR(i,0,po.size()){
            count+=po[i];
        }
        cout<<count<<endl;
        
    }
}
