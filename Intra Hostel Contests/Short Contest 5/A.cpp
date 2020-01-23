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

int main()
{
    io;
    float l,p,q;
    cin>>l>>p>>q;
    cout<<fixed<<showpoint<<setprecision(5)<<(p/(p+q))*l;
}
