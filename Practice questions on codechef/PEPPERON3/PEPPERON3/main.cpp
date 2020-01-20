//
//  main.cpp
//  PEPPERON3
//
//  Created by sharvan kumar on 18/08/19.
//  Copyright © 2019 Bhargav Varshney. All rights reserved.
//

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

int vec_sum(int a[], int n){
    
    int score=0;
    FOR(i,0,n){
        if(i<n/2)
            score+=a[i];
        else
            score-=a[i];
    }
    return score;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> sum;
        int a[n][n];
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                scanf("%1d", &a[i][j]);
            }
        }
        int add=0;
        for(int i = 0; i < n; ++i){
            add+=vec_sum(a[i],n);
        }
        add = abs(add);
        sum.pb(add);
        for(int i = 1; i < n+1; ++i)
        {
            add = 0;
            add -= 2*vec_sum(a[i-1],n);
            FOR(j,0,n)
            {
                add += vec_sum(a[j],n);
            }
            sum.pb(abs(add));
        }
        cout<<*min_element(sum.begin(),sum.begin()+n+1)<<endl;
        
    }
}
