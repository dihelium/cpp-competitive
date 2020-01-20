#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<cstdio>
#include<map>
#include<cassert>
#include<sstream>
using namespace std;

#define FOR(i,a,b) for(int i = a; i < b; ++i)
#define pb push_back
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int MOD = 1000000007;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,e;
        int countb = 0,countc = 0;
        cin>>a>>b>>c>>d>>e;
        if(e>d){
            while(c>0&&a>1){
                if(a>=2&&c>=1){
                    countc++;
                    a-=2;
                    c-=1;
                }
            }
            while(b>0&&a>1){
                if(a>=2&&b>=1){
                    countb++;
                    a-=2;
                    b-=1;
                }
            }
        }
        else{
            while(b>0&&a>1){
                if(a>=2&&b>=1){
                    countb++;
                    a-=2;
                    b-=1;
                }
            }
            while(c>0&&a>1){
                if(a>=2&&c>=1){
                    countc++;
                    a-=2;
                    c-=1;
                }
            }
        }
        cout<<countb*d+countc*e<<endl;
    }
}
