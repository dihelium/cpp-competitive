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


int main(){
    vector<int> v;
    v.pb(1);
    v.pb(7);
    v.pb(3);
    v.pb(5);
    v.pb(6);
    vector<int>::iterator it = std::lower_bound(v.begin(),v.end(),4);
    cout<<*it;
    
}
