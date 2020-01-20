#include <iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool ok(int a[], int n){
    for(int i = 0; i <= n/2; i++){
        if(a[i] != a[n-1-i]) return false;
    }
    int b[7] = {0};
    for(int i = 0; i < n; i++){
        if(a[i] <= 0 || a[i] > 7){
            return false;
        }
        b[a[i]-1] = 1;
    }
    for(int i = 0; i < 7; i++ ) if(b[i] == 0) return false;
    return true;
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        if(ok(a, n)) cout << "yes" << el;
        else cout << "no" << el;
    }
}