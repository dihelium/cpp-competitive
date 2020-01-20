//
//  main.cpp
//  NONNEGSUBARRAY
//
//  Created by sharvan kumar on 30/09/19.
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

vector<int> maxset(vector<int> &A) {
    int curr = 0,currlen = 0, n = A.size();
    int up = 0,len = 0, flag = 0;
    int start=0,end=0;
    int currstart=0,currend=0;
    for(int i = 0; i < n; ++i){
        if(A[i]>=0){
            up+=A[i];
            len++;
            if(flag==0){
                start = i;
                flag = 1;
                end = i-1;
            }
            end++;
            
        }
        else{
            up = 0;
            len = 0;
            flag = 0;
        }
        if((up>curr)||(up==curr&&len>currlen)){
            curr = up;
            currstart = start;
            currend = end;
            currlen = len;
        }
    }
    vector<int> v;
    for(int i = currstart;i<=currend;++i){
        v.push_back(A[i]);
    }
    if(v[0]<0)
        v.pop_back();
    return v;
}


int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    vector<int> v;
    int el;
    for(int i = 0;i<n;++i){
        cin>>el;
        v.push_back(el);
    }
    vector<int> out;
    out = maxset(v);
    for(int i = 0 ;i<out.size();++i){
        cout<<out[i]<<" ";
    }
    return 0;
}
