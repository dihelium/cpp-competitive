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

int main()
{
    string s;
    cin>>s;
    int count=0;
    count+= (pow(2,s.length())-2);
    FOR(i,0,s.length()){
        if(s[i]==55){
            count+= pow(2,s.length()-i-1);
        }
    }
    cout<<count+1;
}
