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

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int room[10];
    FOR(i,0,10){
        room[i] = 0;
    }
    
    FOR(i,0,n){
        if(s[i]==76){
            int j = 0;
            while(j<10){
                if(room[j]==0){
                    room[j] = 1;
                    break;
                }
                j++;
            }
        }
        else if(s[i]==82){
            int k = 9;
            while(k>=0){
                if(room[k]==0){
                    room[k] = 1;
                    break;
                }
                k--;
            }
        }
        else if(s[i]>=48&&s[i]<=57){
            room[s[i]-48] = 0;
        }
    }
    FOR(i,0,10){
        cout<<room[i];
    }
}
