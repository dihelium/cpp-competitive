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
        vector<int> v;
        for(int i = 0;i<n;++i){
            int el;
            cin>>el;
            v.pb(el);
        }
        int count = 1;
        FOR(i,1,5){
            std::vector<int>::iterator i1;
            i1 = std::min_element(v.begin(),v.begin()+i);
            if(v[i]<*i1)
                {count++;
                	//cout<<"1-5"<<endl;
                }
        }
        FOR(i,5,n){
            std::vector<int>::iterator i1;
            i1 = std::min_element(v.begin()+i-5,v.begin()+i);
            if(v[i]<*i1)
                count++;
        }
        cout<<count<<endl;

    }
}
