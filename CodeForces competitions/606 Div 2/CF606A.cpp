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

#define FOR(i,a,b) for(long long i = a; i < b; ++i)
#define pb push_back
const int MOD = 1000000007;

int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		/*int flag = 0;
		vector<long long>v;
		FOR(i,1,n+1){
			long long q = i/10;
			int r = i%10;
			if(q==0){
				v.push_back(i);
			}
			else{
				int flag = 	1,prevr;
				while(q){
					prevr = r;
					r = q%10;
					q = q/10;
					if(r!=prevr)
					{
						flag = 0;
						break;
					}
				}
				if(flag==1)
					v.pb(i);
			}
		}
		cout<<v.size()<<endl;*/
		long long q = n/10;
		long long r = n%10;
		long long count=1;
		while(q)
		{	
			r = q%10;
			q = q/10;
			count++;
			
		}

		long long repnum = r;
		FOR(i,0,count-1){
			repnum = r + repnum*10;
		}
		if(n<repnum){
			cout<<(count-1)*9 + r-1<<endl;
		}
		else
			cout<<(count-1)*9 + r<<endl;



	}
}