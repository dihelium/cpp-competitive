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

int vec_sum(int a[], int n){
	
	int score;
	FOR(i,0,n){
		if(i<n/2)
			score+=a[i];
		else
			score-=a[i];
	}
	return score;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n=0;
		cin>>n;
		vector<int> sum;
		int a[6][6];
		FOR(i,0,n){
			FOR(j,0,n){
				cin>>a[i][j];
			}
		}
		int add=0;
		FOR(i,0,n){
			add+=vec_sum(a[i],n);
		}
		sum.pb(add);
		FOR(i,1,n+1)
		{
			add = 0;
			add -= 2*vec_sum(a[i-1],n);
			FOR(j,0,n)
			{
				add += vec_sum(a[j],n);
			}
			sum.pb(add);
		}
		cout<<*min_element(sum.begin(),sum.begin()+n+1);

	}
}