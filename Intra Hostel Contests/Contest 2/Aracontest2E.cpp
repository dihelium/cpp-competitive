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

int main()
{
	int n,m;
	cin>>n>>m;
	FOR(i,1,n+1){
		if(i%2==1){
			FOR(j,0,m){
				cout<<'#';
			}
			cout<<endl;
		}
		else{
			if((i/2)%2==1){
				FOR(j,0,m-1){
					cout<<'.';
				}
				cout<<'#'<<endl;
			}
			else{
				cout<<'#';
				FOR(j,0,m-1){
					cout<<'.';
				}
				cout<<endl;
			}
		}
	}
}