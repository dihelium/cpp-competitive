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


void prettyPrint(int A) {
    vector<vector<int> > v;
    for(int i = 0;i<=A-1;++i){
        vector<int> inp;
        int num = A;
        while(num!=A-i-1){
            inp.push_back(num);
            num--;
        }
        for(int j=0;j<2*(A-i)-3;++j)
            {inp.push_back(A-i);}
        int num2 = A-i;
        while(num!=A+1){
            inp.push_back(num);
            num2++;
        }
        v[i] = inp;
        FOR(k,0,inp.size()){
            cout<<inp[k];
        }
        cout<<endl;
    }
    for(int i = A;i<2*A-1;i++)
    {
        
        v[i] = v[2*A-1-i-1];
        FOR(k,0,v[i].size()){
            cout<<v[i][k];
        }
        cout<<endl;
        
    }
    
}

int main()
{
    prettyPrint(5);
}
