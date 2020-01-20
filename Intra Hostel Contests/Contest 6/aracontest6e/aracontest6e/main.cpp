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
#define SOR(i,a,b,c) for(long long i = a; i <= b, i!= c; ++i)
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vecor<long long> vll;
const int MOD = 1000000007;

int main()
{   vll v,w;
    int n;
    cin>>n;
    SOR(a,1,0,12){
        SOR(b,1,a,12){
            SOR(c,1,b,12){
                SOR(d,1,c,12){
                    SOR(e,1,d,12){
                        SOR(f,1,e,12){
                            SOR(g,1,f,12){
                                SOR(h,1,g,12){
                                    SOR(i,1,h,12){
                                        SOR(j,1,i,12){
                                            SOR(k,1,j,12){
                                                SOR(l,1,k,12){
                                                        if(a!=c&&a!=d&&a!=e&&a!=f&&a!=g&&a!=h&&a!=i&&a!=j&&a!=k&&a!=l&&b!=d&&b!=e&&b!=f&&b!=g&&b!=h&&b!=i&&b!=j&&b!=k&&b!=l&&c!=e&&c!=f&&c!=g&&c!=h&&c!=i&&c!=j&&c!=k&&c!=l&&d!=f&&d!=g&&d!=h&&d!=i&&d!=j&&d!=k&&d!=l&&e!=g&&e!=h&&e!=i&&e!=j&&e!=k&&e!=l&&f!=h&&f!=i&&f!=j&&f!=k&&f!=l&&g!=i&&g!=j&&g!=k&&g!=l&&h!=j&&h!=k&&h!=l&&i!=k&&i!=l&&j!=l)
                                                        {
                                                            FOR(x,0,12){
                                                                v.pb(a);
                                                                v.pb(b);
                                                                v.pb(c);
                                                                v.pb(d);
                                                                v.pb(e);
                                                                v.pb(f);
                                                                v.pb(g);
                                                                v.pb(h);
                                                                v.pb(i);
                                                                v.pb(j);
                                                                v.pb(k);
                                                                v.pb(l);
                                                            }
                                                            FOR(q,0,220){
                                                                w.pb(
                                                            }
                                                        }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
