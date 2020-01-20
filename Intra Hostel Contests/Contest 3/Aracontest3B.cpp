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
    string s,t;
    cin>>t;
    int index = t.length();
    FOR(i,0,t.length()){
        string sa;
        sa.append(t,i,1);
        if(sa!="0"){
            index = i;
            break;
        }
    }
    if(index==t.length()){
        cout<<9;
        return 0;
    }
    s.append(t,index,t.length()-index);
    string s0;
    s0.append(s,0,1);
    if(s0=="9"){
        cout<<s0;
        FOR(i,1,s.length()){
            string si;
            si.append(s,i,1);
            if(si>"4"){
                int num = si[0];
                num = 57 - num;
                cout<<num;
            }
            else{
                cout<<si;
            }
        }
        
    }
    else{
        FOR(i,0,s.length()){
            string si;
            si.append(s,i,1);
            if(si>"4"){
                int num = si[0];
                num = 57 - num;
                cout<<num;
            }
            else{
                cout<<si;
            }
        }
        
    }
    
}
