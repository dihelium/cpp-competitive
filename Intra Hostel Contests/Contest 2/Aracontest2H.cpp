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
    int r,ox,oy,nx,ny;
    cin>>r>>ox>>oy>>nx>>ny;
    int flag = 0;
    
    if(nx-ox==0){
        if((ny-oy)%(2*r)==0)
            cout<<(ny-oy)/(2*r);
        else
            cout<<floor((ny-oy)/(2*r))+1;
    }
    else if(ny-oy==0){
        if((nx-ox)%(2*r)==0)
            cout<<(nx-ox)/(2*r);
        else
            cout<<floor((nx-ox)/(2*r))+1;
    }
    else{
        cout<<floor((sqrt((nx-ox)*(nx-ox)+(ny-oy)*(ny-oy)))/(2*r))+1;
    }
   
}
