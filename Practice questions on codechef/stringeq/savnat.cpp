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
        int n;
        cin>>n;
        vector< pair<int, int> > v;
        for(int i = 0;i<n;++i){
            int el;
            cin>>el;
            pair<int, int> p;
            p = make_pair(el,0);
            v.pb(p);
        }
        int x,y,a,b;
        cin>>x>>a>>y>>b;
        int k;
        cin>>k;
        int max = (x>y)?a:b;
        int min = (x<y)?a:b;
        sort(v.begin(),v.end());
        for(int i = 0;i<n/max;++i){
            v[i].second = (x>y)?x:y;
        }
        for(int i = n/max+1;i<n/max+1+n/min;++i){
            v[i].second = (x<y)?x:y;
        }
        vector<int> product;
        for(int i = 0; i<n; ++i)
        {
            int pro = v[i].first*v[i].second;
            pro = pro/100;
            product.pb(pro);
        }
        int sum = 0,flag = 0,tix = 0;
        for(int i =0;i<n;++i){
            sum+=product[i];
            if(sum>=k){
                flag = 1;
                tix = i;
                break;
            }
        }
        if(flag==0)
            cout<<-1<<endl;
        else
            cout<<tix<<endl;

    }
}
