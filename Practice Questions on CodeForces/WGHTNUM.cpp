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

typedef long long int int64;

int64 power(int64 A, int64 B)
{
    if (A == 0)
        return 0;
    if (B == 0)
        return 1;

    int64 y;
    if (B % 2 == 0) {
        y = power(A, B / 2);
        y = (y * y) % MOD;
    }

    else {
        y = A % MOD;
        y = (y * (power(A, B - 1) % MOD)) % MOD;
    }

    return (int64)(y % MOD);
}

int main()
{
	int t,ans;
	cin>>t;
	while(t--)
	{
		int64 n,w;
		cin>>n>>w;
		if(n<2||abs(w)>9)
			cout<<0<<endl;
		else if(w>=0)
		{
			ans = ((9-w)*power(10LL,n-2))%MOD;
			cout << ans<<endl;
		}
		else
		{
			ans = ((10+w)*power(10LL,n-2))%MOD;
			cout << ans<<endl;
		}

	}
	return 0;
}