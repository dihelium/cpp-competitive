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
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int MOD = 1000000007;

bool ispalindrome(string s){
    FOR(i,0,s.length()/2){
        if(s[i]!=s[s.length()-i-1]){
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    int count = 0;
    while(t--){
        string s;
        cin>>s;
        if(ispalindrome(s)){
            count++;
        }
        
    }
    cout<<count<<endl;
}
