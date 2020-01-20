/*
 // Sample code to perform I/O:
 
 cin >> name;                            // Reading input from STDIN
 cout << "Hi, " << name << ".\n";        // Writing output to STDOUT
 
 // Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
 */

// Write your code here
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
const int maxn = 100007;
vi nbur[maxn];
bool exists[maxn];

void dfs(int n){
    exists[n] = 1;
    for(int u:nbur[n]){
        if(exists[u]==false) //very important to include this particular condition
            dfs(u);
    }
}
int main()
{
    int n,m,k,con = 0;
    cin>>n>>m>>k;
    FOR(i,0,m){
        int u,v;
        cin>>u>>v;
        u--;v--;
        nbur[u].pb(v);
        nbur[v].pb(u);
    }
    FOR(i,0,n){
        if(exists[i]==false){
            dfs(i);con++;
        }
    }
    if(con>k){
        cout<<-1<<endl;
    }
    else{
        cout<<m-n+k<<endl;
    }
}
