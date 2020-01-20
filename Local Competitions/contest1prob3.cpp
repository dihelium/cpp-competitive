#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<cstdio>
#include<map>
#include<cassert>
#include<complex>
using namespace std;
using cd = complex<double>;

#define FOR(i,a,b) for(int i = a; i < b; ++i)
#define pb push_back
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int MOD = 1000000007;
const double PI = acos(-1);

void fft(vector<cd> & a, bool invert) {
    int n = a.size();
    if (n == 1)
        return;
    
    vector<cd> a0(n / 2), a1(n / 2);
    for (int i = 0; 2 * i < n; i++) {
        a0[i] = a[2*i];
        a1[i] = a[2*i+1];
    }
    fft(a0, invert);
    fft(a1, invert);
    
    double ang = 2 * PI / n * (invert ? -1 : 1);
    cd w(1), wn(cos(ang), sin(ang));
    for (int i = 0; 2 * i < n; i++) {
        a[i] = a0[i] + w * a1[i];
        a[i + n/2] = a0[i] - w * a1[i];
        if (invert) {
            a[i] /= 2;
            a[i + n/2] /= 2;
        }
        w *= wn;
    }
}

vector<int> multiply(vector<int> const& a, vector<int> const& b) {
    vector<cd> fa(a.begin(), a.end()), fb(b.begin(), b.end());
    int n = 1;
    while (n < a.size() + b.size())
        n <<= 1;
    fa.resize(n);
    fb.resize(n);
    
    fft(fa, false);
    fft(fb, false);
    for (int i = 0; i < n; i++)
        fa[i] *= fb[i];
    fft(fa, true);
    
    vector<int> result(n);
    for (int i = 0; i < n; i++)
        result[i] = round(fa[i].real());
    return result;
}

int main()
{
    int A,D;
    cin>>A>>D;
    int a = min(A,D);
    int d = max(A,D);
    if(d%a==0){
        cout<<a<<endl;
    }
    else{
        vi v0;
        int maxq =d/a,flag = 0,index = a;
        FOR(i,0,maxq+1){
            v0.pb(1);
        }
        FOR(i,1,d-a+1){
            vi veci = v0;
            FOR(j,0,i){
                vi vecj = veci;
                if(int(d/(a+j))<maxq){
                    maxq--;
                    vecj.pop_back();
                }
                veci = multiply(veci,vecj);
            }
            if(veci.size()>d){
                if(veci[d]){
                    flag = 1;
                    index = a+i;
                }
                
            }
        }
        cout<<index<<endl;
    }
}
