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
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s;
        int flag10 = 0,flag3 = 0,flag2 = 0;
        
        FOR(i,0,s.length()){
            if(s[i]==48)
            {
                flag10 = 1;
                t.append(s,0,i);
                t.append(s,i+1,s.length()-1-i);
                break;
            }
        }
        FOR(i,0,t.length()){
            if(t[i]%2==0)
            {
                flag2 = 1;
                break;
            }
        }
        int sum = 0;
        FOR(i,0,s.length()){
            sum+=(s[i]);
        }
        if(sum%3==0)
            flag3 = 1;
        if(flag2==1&&flag3==1&&flag10==1)
            cout<<"red"<<endl;
        else
            cout<<"cyan"<<endl;
    }
}
