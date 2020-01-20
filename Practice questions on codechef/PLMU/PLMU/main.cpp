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
        int zcount=0, tcount=0;
        int n;
        cin>>n;
        int num;
        for(int i = 0;i<n;++i){
            cin>>num;
            if(num==0)
                zcount++;
            else if(num==2)
                tcount++;
        }
        long zsum=0,tsum=0;
        if(zcount>=2){
            zsum=zcount*(zcount-1)/2;
        }
        if(tcount>=2){
            tsum=tcount*(tcount-1)/2;
        }
        cout<<zsum+tsum<<endl;
    }
}









