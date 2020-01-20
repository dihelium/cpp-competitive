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

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    
    // base case
    if (a == b)
        return a;
    
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
    int n,m,bo,gi;
    vector<int>b,g;
    cin>>n>>m>>bo;
    FOR(i,0,bo)
    {
        int el;
        cin>>el;
        b.pb(el);
    }
    cin>>gi;
    FOR(i,0,gi)
    {
        int el;
        cin>>el;
        g.pb(el);
    }
    int GCD = gcd(n,m);
    vector<int>vec_gcd;
    if(GCD==1)
    {
        cout<<"Yes"<<endl;
    }
    else{
        FOR(i,0,bo){
            vector<int>::iterator it;
            it = std::find(vec_gcd.begin(),vec_gcd.end(),b[i]%GCD);
            if(it==vec_gcd.end()){
                vec_gcd.pb(b[i]%GCD);
            }
        }
        FOR(i,0,gi){
            vector<int>::iterator it;
            it = std::find(vec_gcd.begin(),vec_gcd.end(),g[i]%GCD);
            if(it==vec_gcd.end()){
                vec_gcd.pb(g[i]%GCD);
            }
        }
        if(vec_gcd.size()==GCD)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    
}
