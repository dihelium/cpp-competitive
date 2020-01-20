//
//  main.cpp
//  SUBGIVENSUM2
//
//  Created by sharvan kumar on 21/08/19.
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

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int a[n];
        for(int i=0;i<n;i++){cin>>a[i];}
        int first=0,last=0,sum=0;
        for(;last<n;){
            while(sum<s){
                sum+=a[last++];
                
            }
            //cout<<sum<<endl;
            
            
            while(sum>s){
                sum-=a[first];
                first++;
            }
            //cout<<sum<<endl;
            //cout<<i<<endl;cout<<first<<endl;cout<<last<<endl;
            \
            if(sum==s){
                cout<<first+1<<" "<<last<<endl;
                break;
            }
            //cout<<"s";
        }
        if(last==n-1)
            cout<<-1<<endl;
        
    }
}
