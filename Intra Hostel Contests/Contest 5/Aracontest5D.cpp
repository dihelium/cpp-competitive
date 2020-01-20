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
typedef vector<string> vs;
vi exists[2000000];

vi perm(int count){
    vi v;
    if(count==1){
        v.pb(0);
        v.pb(1);
    }
    else if(count==2){
        v.pb(10);
        v.pb(11);
    }
    else{
        vi ret = perm(count-1);
        FOR(i,0,ret.size()){
            v.pb(ret[i]*10);
            v.pb(ret[i]*10+1);
        }
    }
    return v;
}


vi quasibinary(int n,int count){
    vi v;
    int flag = 1;
    FOR(i,0,s.length()){
        if(!(s[i]==48||s[i]==49)){
            flag = 0;
            break;
        }
    }
    if(s=="0"){
        exists[0] = v;
        return v;
    }
    else if(exists[stoi(s)].size())
        return exists[stoi(s)];
    else if(s=="1"){
        v.pb(1);
        exists[1] = v;
        return v;
    }
    else if(s=="10"){
        v.pb(10);
        exists[10] = v;
        return v;
    }
    else if(s=="11"){
        v.pb(11);
        exists[11] = v;
        return v;
    }
    else if(stoi(s)<10){
        FOR(i,0,stoi(s)){
            v.pb(1);
        }
        exists[stoi(s)] = v;
        return v;
    }
    else if(flag==1){
        v.pb(stoi(s));
        exists[stoi(s)] = v;
        return v;
    }
    else{
        int n = stoi(s);
        vi nums = perm(int(s.length())),rems;
        FOR(i,0,nums.size()){
            if(n%nums[i]==0){
                FOR(j,0,n/nums[i]){
                    v.pb(nums[i]);
                }
                return v;
            }
        }
        int min_rem = 1e9;
        FOR(i,0,nums.size()){
            string so = to_string(n%nums[i]);
            int l = int(quasibinary(so).size());
            rems.pb(l);
        }
        FOR(i,0,nums.size()){
            if(rems[i]<min_rem)
                min_rem = rems[i];
        }
        FOR(i,0,nums.size()){
            
            if(rems[i]==min_rem){
                FOR(j,0,n/nums[i]){
                    v.pb(nums[i]);
                }
                vi rest = quasibinary(to_string(n%nums[i]));
                FOR(i,0,rest.size()){
                    v.pb(rest[i]);
                }
            }
        }
    }
    exists[stoi(s)] = v;
    return v;
}


int main()
{
    string s;
    cin>>s;
    if(s=="0")
        {cout<<1<<endl;cout<<0;}
    else{
        vi v;
        int n = stoi(s),flag=1;
        int count = s.length();
        FOR(i,0,s.length()){
            if(!(s[i]==48||s[i]==49)){
                flag = 0;
                break;
            }
        }
        if(flag){
            v = quasibinary(n,count);
            cout<<v.size()<<endl;
            FOR(i,0,v.size()){
                if(i)
                    cout<<" ";
                cout<<v[i];
            }
        }
        else{
            cout<<1
        }
    }
    
}
