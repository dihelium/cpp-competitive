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
    int r,c;
    cin>>r>>c;
    if(r==1&&c==1)
        cout<<0<<endl;
    else if(r==1){
        FOR(i,0,c){
            cout<<i+2<<" ";
        }
    }
    else if(c==1){
        FOR(i,0,r){
            cout<<i+2<<endl;
        }
    }
    else{
        if(r<=c){
            FOR(i,0,r){
                cout<<i+2<<" ";
                FOR(j,1,c){
                    cout<<(i+2)*(j+r+1)<<" ";
                }
                cout<<endl;
            }
        }
        else{
            FOR(j,0,c){
                cout<<j+2<<" "<<" ";
            }
            cout<<endl;
            FOR(i,1,r){
                FOR(j,0,c){
                    cout<<(j+2)*(i+c+1)<<" ";
                }
                cout<<endl;
            }
        }
    }
}
