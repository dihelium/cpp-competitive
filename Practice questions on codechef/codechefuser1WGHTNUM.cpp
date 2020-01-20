#include <iostream>
using namespace std;
#define int long long 
#define MOD 1000000007
int power(int a,int b){
    if(b==0)    return 1;
    int x = power(a,b/2);
    x*=x;
    x%=MOD;
    if(b%2==0)  return x;
    return (a*x)%MOD;
}

int f(int n){
    if(n>=10 || n<=-10) return 0;
    if(n==0)    return 9;
    if(n<0) return 10+n;
    return 9-n;
}

int32_t main(){
    ios_base::sync_with_stdio(0);   cin.tie(0); cout.tie(0);
    int t,n,w;
    cin>>t;
    while(t--){
        cin >> n >> w;
        int ans = (power(10LL,n-2)*f(w))%MOD;
        cout << ans << "\n";
    }
}