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
using namespace std;

#define FOR(i,a,b) for(int i = a; i < b; ++i)
#define pb push_back
#define io ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
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
    int n;
    cin>>n;
    vi v;
    FOR(i,0,n){
        int el;
        cin>>el;
        v.pb(el);
    }
    int globalcount=0,count=0,flag=1;
    FOR(i,1,n){
        if(v[i]<v[i-1]){
            flag = 0;
            globalcount = (globalcount<count)?count:globalcount;
            count = 0;
        }
        else{
            count++;
            globalcount = (globalcount<count)?count:globalcount;
        }
    }
    cout<<globalcount+1<<endl;
}
