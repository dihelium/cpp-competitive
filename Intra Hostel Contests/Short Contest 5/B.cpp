#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<cstdio>
#include<map>
#include<cassert>
#include<sstream>
#include<iomanip>
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
#define FOR(i,a,b) for(ll i = a; i < b; ++i)
#define pb push_back
#define io ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
const int MOD = 1000000007;

bool ifprime(ll n)
{
    if(n==1)
        return false;
    ll i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
        
    }
    return true;
}

ll gcd(ll n,ll m)
{
    if(n==0)
        return m;
    return gcd(m%n,n);
}

void disp(vi v)
{
    for(auto u:v)
        cout<<u<<" ";
    cout<<"\n";
}

vll inp(ll n){
    ll el;
    vll v;
    FOR(i,0,n){
        cin>>el;
        v.pb(el);
    }
    return v;
}

ll fast_expo(ll n,ll m, ll md)
{
    ll a=1;
    while(m>0)
    {
        if(m&1) a=(a*n)%md;
        n=(n*n)%md;
        m/=2;
    }
    return a%md;
}

ll findNumSmall(ll N, ll K)
{
    ll rem = (N + K) % K;
    
    if (rem == 0)
        return N;
    else
        return N + K - rem;
}

ll findNumBig(ll N, ll K)
{
    ll rem = N % K;
    
    if (rem == 0)
        return N;
    else
        return N - rem;
}

int main()
{
    io;
    ll n,k;
    cin>>n>>k;
    vll a,b;
    FOR(i,0,n/k){
        ll el;
        cin>>el;
        a.pb(el);
    }
    FOR(i,0,n/k){
        int el;
        cin>>el;
        b.pb(el);
    }
    ll product = 1;
    FOR(j,0,n/k){
        string s="";
        FOR(i,0,k){
            s+="9";
        }
        ll num = stoll(s)%MOD;
        ll small = findNumSmall(b[j]*fast_expo(10,k-1,MOD),a[j])%MOD;
        ll big = findNumBig((b[j]+1)*fast_expo(10,k-1,MOD)-1,a[j])%MOD;
        
        small = small/a[j];
        big = big/a[j];
        ll exclude = (big - small + 1)%MOD;
        
        ll count = (num/a[j]+1)%MOD;
        ll actual_count = count - exclude;
        actual_count = actual_count%MOD;
        product = (product%MOD)*(actual_count%MOD);
    }
    cout<<product%MOD;
}
