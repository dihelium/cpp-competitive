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
	int n,k;
	cin>>n>>k;
	int el;
	vector<int> v;
	FOR(i,0,n){
		cin>>el;
		v.pb(el);
	}
	sort(v.begin(),v.end());
	int sum = 0,index = 0,flag = 0;
	FOR(i,0,n){
		sum+=v[i];
		if(sum==k){
			index = i;
			flag = 1;
			break;
		}
		else if(sum>k){
			index = i;
			flag = 2;
			break;
		}
	}
	if(flag==1){
		cout<<index+1<<endl;
		FOR(i,0,index){
		cout<<v[i]<<" ";
		}
		cout<<v[index];
	}
	else if(flag==2){
		if(index==0)
			cout<<0;
		else{
		cout<<index<<endl;
		FOR(i,0,index-1){
		cout<<v[i]<<" ";
		}
		cout<<v[index-1];
		}

	}
	else{
		cout<<n<<endl;
		FOR(i,0,n-1){
			cout<<v[i]<<" ";
		}
		cout<<v[n-1];
	}
	
}