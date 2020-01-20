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

vector<int> flip(string A) {
    long n = A.length();
    int zeros=0, ones=0, left=0, right=0;
    int currz=0, curro=0, currl=0, currr=0;
    int flag = 0;
    int zeroflag = 0;
    vector<int> v;
    for(int i = 0;i<n;++i){
        if(A[i]=='0'){
            zeroflag = 1;
            break;
        }
    }
    if(zeroflag == 0){
        return v;
    }
    for(int i = 0;i<n;++i){
        if(A[i]=='0'){
            zeros++;
            right = i;
            if(flag==0)
            {
                flag=1;
                left = i;
            }
            
        }
        else if(flag==1){
            ones++;
            right=i;
            if(zeros-ones<0){
                flag=0;
                zeros = 0;
                ones = 0;
                left = 0;
                right = 0;
            }
        }
        else;
        
        
        if(zeros-ones>currz-curro){
            currz = zeros;
            curro = ones;
            currl = left;
            currr = right;
        }
    }
    v.push_back(currl+1);
    v.push_back(currr+1);
    return v;
}
int main(){
    string s;
    cin>>s;
    vector<int> v;
    v = flip(s);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
