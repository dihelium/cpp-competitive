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

pair<long long,long long> twopower(long long num){
    long long q=num,r=0,count=0;
    q = num/2;
    r = num%2;
    while(q>0&&r==0){
        r = q%2;
        q = q/2;
        count++;
    }
    long long pow_two = pow(2,count);
    long long odd_num = num/pow_two;
    pair<long long,long long>p;
    p = make_pair(odd_num,count);
    return p;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> v;
        long long el;
        FOR(i,0,n){
            cin>>el;
            vector<long long>::iterator it;
            it = std::find(v.begin(),v.end(),el);
            if(it==v.end()){
                v.pb(el);
            }
        }
        vector<long long >odd,po;
        FOR(i,0,v.size()){
            vector<long long>::iterator jt;
            pair<long long, long long> input_pair;
            input_pair = twopower(v[i]);
            long long oddity = input_pair.first;
            long long power = input_pair.second;
            jt = std::find(odd.begin(),odd.end(),oddity);
            if(jt==odd.end()){
                odd.pb(oddity);
                po.pb(power);
            }
            else{
                if(power>po[jt-odd.begin()])
                    po[jt-odd.begin()] = power;
            }
            
        }
        long long count=0;
        FOR(i,0,po.size()){
            count+=po[i];
        }
        cout<<count<<endl;
        
    }
}
