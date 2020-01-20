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
    
    long long a,b,s;
    cin>>a>>b>>s;
    if(s<abs(a)+abs(b)){
        cout<<"No"<<endl;
    }
    else if((s-abs(a)-abs(b))%2==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}