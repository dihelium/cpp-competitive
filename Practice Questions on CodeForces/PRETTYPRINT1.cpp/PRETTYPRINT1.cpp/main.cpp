//
//  main.cpp
//  PRETTYPRINT1.cpp
//
//  Created by sharvan kumar on 16/09/19.
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


void prettyPrint(int A) {
    vector<vector<int> > v;
    for(int i = 0;i<=A-1;++i){
        vector<int> inp;
        int num = A;
        while(num!=A-i-1){
            inp.push_back(num);
            num--;
        }
        if(2*(A-i)-3>0)
           {for(int j=0;j<2*(A-i)-3;++j)
            {inp.push_back(A-i);}
        
            int num2 = A-i;
            while(num2!=A+1){
                inp.push_back(num2);
                num2++;
            }
           }
        else{
            int num3 = 2;
            while(num3!=A+1){
                inp.push_back(num3);
                num3++;
            }
        }
        v.push_back(inp);
        
        FOR(k,0,inp.size()){
            cout<<inp[k];
        }
        cout<<endl;
    }
    for(int i = A;i<2*A-1;i++)
    {
        
        v.push_back(v[2*A-1-i-1]);
        FOR(k,0,v[i].size()){
            cout<<v[i][k];
        }
        cout<<endl;
        
    }
    
}

int main()
{
    prettyPrint(4);
}
