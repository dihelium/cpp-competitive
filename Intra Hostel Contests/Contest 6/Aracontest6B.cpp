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
    cin>>s;//76 82
    int room[10];
    FOR(i,0,10){
        room[i] = 0;
    }
    int li=0,ri=9;
    FOR(i,0,n){
        if(s[i]==76){
            room[li] = 1;
            while(room[li]&&ri>=li){
                li++;
            }
        }
        else if(s[i]==82){
            room[ri] = 1;
            while(room[ri]&&ri>=li){
                ri--;
            }
        }
        else if(s[i]>=48&&s[i]<=57){
            if(s[i]-48<=li){
                li = s[i]-48;
                room[li] = 0;
            }
            else if(s[i]-48>=ri){
                ri = s[i]-48;
                room[ri] = 0;
            }
        }
    }
    FOR(i,0,10){
        cout<<room[i];
    }
    
}
