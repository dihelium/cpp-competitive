#include<iostream>
#include<vector>
#include<string>
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
    int t;
    cin>>t;
    while(t--){
    	int a,b,c,d,k;
    	cin>>a>>b>>c>>d>>k;
    	int pens=1,pencils=1;
    	if(a%c==0){
    		pens = a/c;
    	}
    	else{
    		pens = a/c + 1;
    	}
    	if(b%d==0){
    		pencils = b/d;
    	}
    	else{
    		pencils = b/d + 1;
    	}
    	if(pens+pencils>k){
    		cout<<-1<<endl;
    	}
    	else
    		cout<<pens<<" "<<pencils<<endl;
    }
}