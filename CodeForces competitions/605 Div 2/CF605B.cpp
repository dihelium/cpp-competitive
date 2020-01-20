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
vector<char> v;
bool istypeable(char c){
    bool flag = false;
    FOR(i,0,v.size()){
        if(c==v[i]){
            flag = true;
            break;
        }
        
    }
    return flag;
}

int main()
{
    long long n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    
    FOR(i,0,k){
        char el;
        cin>>el;
        v.pb(el);
    }
    
    vector<bool> typ;
    FOR(i,0,n){
        if(istypeable(s[i]))
            typ.pb(true);
        else
            typ.pb(false);
    }
    
    long long sum=0,appl=0;
    bool flag = false;
    long long count=0;
    FOR(i,0,n){
    	if(typ[i]==true){
    		flag=true;
    		count++;
    	}
    	else{
    		flag=false;
    		sum+=(count*(count+1))/2;
    		count = 0;

    	}
    	if(i==n-1)
    		sum+=(count*(count+1))/2;
    }
    cout<<sum;









}
