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


bool isPerfectSquare(long long x)
{
    long double sr = sqrt(x);
    return ((sr - floor(sr)) == 0);
}

bool checkremainder(long long x,vi v){
    FOR(i,0,v.size()){
        if(x%20==v[i]){
            return true;
        }
    }
    
        return false;
}

pair<long long,long long> fermatfac(long long n){
    int r = n%20;
    if(r==0){
        long long a = ceil(sqrt(n));
        a = (a%2==0)?ceil(sqrt(n))+1:ceil(sqrt(n));
        long long b2 = a*a - n;
        while(!isPerfectSquare(b2)&&a%2==1){
            a+=2;
            b2 = a*a - n;
        }
        return {a+sqrt(b2),a-sqrt(b2)};
        
    }
    else if(r==4){
        long long a = ceil(sqrt(n));
        while(!(a%10==1||a%10==5||a%10==9)){
            a++;
        }
        long long b2 = a*a - n;
        while(!isPerfectSquare(b2)){
            if(a%10==1||a%10==5){
                a+=4;
                b2 = a*a - n;
            }
            else if(a%10==9){
                a+=2;
                b2 = a*a - n;
            }
        }
        return {a+sqrt(b2),a-sqrt(b2)};
        
    }
    else if(r==8){
        long long a = ceil(sqrt(n));
        while(!(a%10==1||a%10==9)){
            a++;
        }
        long long b2 = a*a - n;
        while(!isPerfectSquare(b2)){
            if(a%10==1){
                a+=8;
                b2 = a*a - n;
            }
            else if(a%10==9){
                a+=2;
                b2 = a*a - n;
            }
        }
        return {a+sqrt(b2),a-sqrt(b2)};
    }
    else if(r==12){
        long long a = ceil(sqrt(n));
        while(!(a%10==1||a%10==5||a%10==9)){
            a++;
        }
        long long b2 = a*a - n;
        while(!isPerfectSquare(b2)){
            if(a%10==3){
                a+=4;
                b2 = a*a - n;
            }
            else if(a%10==7){
                a+=6;
                b2 = a*a - n;
            }
        }
        return {a+sqrt(b2),a-sqrt(b2)};
    }
    else if(r==16){
        long long a = ceil(sqrt(n));
        while(!(a%10==3||a%10==5||a%10==7)){
            a++;
        }
        long long b2 = a*a - n;
        while(!isPerfectSquare(b2)){
            if(a%10==3||a%10==5){
                a+=2;
                b2 = a*a - n;
            }
            else if(a%10==7){
                a+=6;
                b2 = a*a - n;
            }
        }
        return {a+sqrt(b2),a-sqrt(b2)};
    }
    
    else{
        long long a = ceil(sqrt(n));
        while(!(a%10==3||a%10==5||a%10==7)){
            a++;
        }
        long long b2 = a*a - n;
        while(!isPerfectSquare(b2)){
            if(a%10==3||a%10==5){
                a+=2;
                b2 = a*a - n;
            }
            else if(a%10==7){
                a+=6;
                b2 = a*a - n;
            }
        }
        return {a+sqrt(b2),a-sqrt(b2)};
    }
    }

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long y;
        cin>>y;
        long long b,a;
        pair<long long,long long>p = fermatfac(8*y);
        long long first = p.first;
        long long second  = p.second;
        b = (first + second - 2)/4;
        a = (first - second + 2)/4;
        cout<<a<<" "<<b<<endl;
    }
    
}
