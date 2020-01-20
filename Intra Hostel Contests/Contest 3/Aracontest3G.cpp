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

string list(int n){
    string s;
    if(n==1){
        s = "1";
        return s;
    }
    if(n==2){
        s = "1221";
        return s;
    }
    if(n==3){
        s = "123132231321";
        return s;
    }
    s = list(n-1);
    string u,v;
    long num = s.length()/(n-1);
    FOR(i,0,num){
        string t;
        FOR(j,(n-1)*i,(n-1)*(i+1)){
            
            
        }
    }
}

int main()
{
    
}
