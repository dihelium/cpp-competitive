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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int flag=100000;

        for(int i=0;i<(n+1)/2;++i){
            if(s[i]=='1'||s[n-i-1]=='1'){
                flag = i;
                break;
            }
        }
        if(flag==100000){
            cout<<n<<endl;
        }
        else
            cout<<2*(n-flag)<<endl;

    }
}
