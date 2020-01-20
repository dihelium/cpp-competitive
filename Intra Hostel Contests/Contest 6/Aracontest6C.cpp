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

bool iscomp[1000005];
vector<ll> primes;
int main()
{
	io;
	int n;
	cin>>n;
	ll G = 0;
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		G = gcd(a[i],G);
	}
	for(ll i=2;i<=1000000;i++){
		if(!iscomp[i]){
			for(ll j=2*i;j<=1000000;j+=i){
				iscomp[j]=true;
			}
			primes.pb(i);
		}
	}
	ll ans = 1;
	for(auto u:primes){
		int ct=0;
		while((G%u)==0){
			G/=u;
			ct++;
		}
		ans*=(ct+1LL);
		if(G==1)
			break;
	}
	if(G!=1){
		cout<<2*ans;
		return 0;
	}
	cout<<ans;
	// cout<<' '<<2LL*3*5*7*11*13*17*19*23*29*31;
	return 0;
}