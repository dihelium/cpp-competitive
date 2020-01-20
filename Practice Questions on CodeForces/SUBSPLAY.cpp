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

int maxm (int a,int b){
    return (a>b)?a:b;
}

int common(string s1, string s2){
    int m = s1.length();
    int n = s2.length();
    if(m==0||n==0)
        return 0;
    if(s1[m-1]==s2[n-1]){
        string s3,s4;
        s3.append(s1,0,m-1);
        s4.append(s2,0,n-1);
        return 1 + common(s3,s4);
    }
    else{
        string s3,s4;
        s3.append(s1,0,m-1);
        s4.append(s2,0,n-1);
        
        return maxm(common(s1,s4),common(s2,s3));
    }
    
    
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int globalk=0,flag=0;
        for(int i = 0;i<n;++i){
            
            for(int j = i+1;j<n;++j){
                int k = 0;
                if(s[i]==s[j]){
                    string s1,s2;
                    s1.append(s,i,n-i);
                    s2.append(s,j,n-j);
                    k = common(s1,s2);
                }
                if(k>globalk)
                {globalk = k;
                    flag=1;
                    break;}
            }
            if(flag)
                break;
            
        }
        cout<<globalk<<endl;
    }
}
