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

int countswitches(vi a, vi b, vi c){
    if(a.size()==0){
        if(b.size()==0||c.size()==0){
            return 0;
        }
        else{
            int count1 = 0,count2 = 0,count3 = 0;
            int range_min_b = *min_element(b.begin(),b.end()),range_max_b = *max_element(b.begin(),b.end()),range_min_c = *min_element(c.begin(),c.end()),range_max_c = *max_element(c.begin(),c.end());
            FOR(i,0,b.size()){
                if(b[i]>range_min_c&&b[i]<range_max_c){
                    count1++;
                }
                else if(b[i]>range_max_c)
                {count2++;}
            }
            return min(int(c.size()),count1+count2);
        }
        
    }
    else if(b.size()==0){
        int count1 = 0,count2 = 0,count3 = 0;
        int range_min_c = *min_element(c.begin(),c.end()),range_max_c = *max_element(c.begin(),c.end());
        FOR(i,0,a.size()){
            if(a[i]>range_min_c&&a[i]<range_max_c){
                count1++;
            }
            else if(a[i]>range_max_c)
            {count2++;}
        }
        return min(int(c.size()),count1+count2);
    }
    else if(c.size()==0){
        int range_min_b = *min_element(b.begin(),b.end()),range_max_b = *max_element(b.begin(),b.end());
        int count1 = 0,count2 = 0,count3 = 0;
        FOR(i,0,a.size()){
            if(a[i]>range_min_b&&a[i]<range_max_b){
                count1++;
            }
            else if(a[i]>range_max_b)
            {count2++;}
        }
        return min(int(b.size()),count1+count2);
    }
    else{
        int counta1 = 0,counta2 = 0,counta3 = 0,countc1 = 0,countc2 = 0,countc3 = 0;
        int range_min_b = *min_element(b.begin(),b.end()),range_max_b = *max_element(b.begin(),b.end()),range_min_c = *min_element(c.begin(),c.end()),range_max_a = *max_element(a.begin(),a.end());
        FOR(i,0,a.size()){
            if(a[i]>range_min_b&&a[i]<range_max_b){
                counta1++;
            }
            else if(a[i]>range_max_b&&a[i]<range_min_c)
            {counta2++;}
            else if(a[i]>range_min_c)
            {counta3++;}
        }
        FOR(i,0,c.size()){
            if(c[i]<range_max_b&&c[i]>range_min_b){
                countc1++;
            }
            else if(c[i]<range_min_b&&c[i]>range_max_a){
                countc2++;
            }
            else if(c[i]<range_max_a){
                countc3++;
            }
        }
        vi mi;
        mi.pb(counta1+counta2);
        mi.pb(b.size());
        mi.pb(countc1+countc2);
        sort(mi.begin(),mi.end());
        return mi[0] + mi[1] + counta3 + countc3;
    }
}

int main(){
    int A,B,C;
    cin>>A>>B>>C;
    vi a,b,c;
    FOR(i,0,A){
        int el;
        cin>>el;
        a.pb(el);
    }
    FOR(i,0,B){
        int el;
        cin>>el;
        b.pb(el);
    }
    FOR(i,0,C){
        int el;
        cin>>el;
        c.pb(el);
    }
    if(A==0){
        if(B==0||C==0){
            cout<<0<<endl;
        }
        else{
            int count1 = 0,count2 = 0,count3 = 0;
            int range_min_b = *min_element(b.begin(),b.end()),range_max_b = *max_element(b.begin(),b.end()),range_min_c = *min_element(c.begin(),c.end()),range_max_c = *max_element(c.begin(),c.end());
            FOR(i,0,B){
                if(b[i]>range_min_c&&b[i]<range_max_c){
                    count1++;
                }
                else if(b[i]>range_max_c)
                {count2++;}
            }
            cout<<min(int(c.size()),count1+count2)<<endl;
        }
        
    }
    else if(B==0){
        int count1 = 0,count2 = 0,count3 = 0;
        int range_min_c = *min_element(c.begin(),c.end()),range_max_c = *max_element(c.begin(),c.end());
        FOR(i,0,A){
            if(a[i]>range_min_c&&a[i]<range_max_c){
                count1++;
            }
            else if(a[i]>range_max_c)
            {count2++;}
        }
        cout<<min(int(c.size()),count1+count2)<<endl;
    }
    else if(C==0){
        int range_min_b = *min_element(b.begin(),b.end()),range_max_b = *max_element(b.begin(),b.end());
        int count1 = 0,count2 = 0,count3 = 0;
        FOR(i,0,A){
            if(a[i]>range_min_b&&a[i]<range_max_b){
                count1++;
            }
            else if(a[i]>range_max_b)
            {count2++;}
        }
        cout<<min(int(b.size()),count1+count2)<<endl;
    }
    else{
        int range_min_b = *min_element(b.begin(),b.end()),range_max_b = *max_element(b.begin(),b.end()),range_min_c = *min_element(c.begin(),c.end()),range_max_a = *max_element(a.begin(),a.end());
        
        if(range_max_a<range_min_b&&range_max_b<range_min_c){
            cout<<0<<endl;
        }
        else if(range_max_b<range_min_c){
            int count1 = 0,count2 = 0,count3 = 0;
            FOR(i,0,A){
                if(a[i]>range_min_b&&a[i]<range_max_b){
                    count1++;
                }
                else if(a[i]>range_max_b&&a[i]<range_min_c)
                    {count2++;}
                else if(a[i]>range_min_c)
                    {count3++;}
                
            }
            if(b.size()<count1+count2){
                cout<<b.size()+count3;
            }
            else{
                cout<<count1 + count2 + count3<<endl;
            }
            
            
        }
        else if(range_max_a<range_min_b){
            int count1=0,count2=0,count3=0;
            FOR(i,0,C){
                if(c[i]<range_max_b&&c[i]>range_min_b){
                    count1++;
                }
                else if(c[i]<range_min_b&&c[i]>range_max_a){
                    count2++;
                }
                else if(c[i]<range_max_a){
                    count3++;
                }
            }
            if(b.size()<count1+count2){
                cout<<b.size()+count3;
            }
            else{
                cout<<count1 + count2 + count3<<endl;
            }
        }
    else{
            vi tempend,tempstart;
            sort(a.begin(),a.end());
            sort(b.begin(),b.end(),greater<int>());
            sort(c.begin(),c.end());
            int AA = A,BB = B,CC = C;
            while(AA--){
                if(a[a.size()-1]>c[C-1]){
                    c.pb(a[a.size()-1]);
                    a.pop_back();
                }
            }
            sort(c.begin(),c.end(),greater<int>());
            sort(a.begin(),a.end(),greater<int>());
            int minimA = a[a.size()-1];
            while(CC--){
                if(c[c.size()-1]<minimA){
                    a.pb(c[c.size()-1]);
                    c.pop_back();
                }
            }
            sort(a.begin(),a.end());
            sort(b.begin(),b.end(),greater<int>());
            sort(c.begin(),c.end());
            vi counts,d,e;
            d = b;
            
            counts.pb(countswitches(a,b,c));
            FOR(i,0,max(2,int(log2(b.size())))){
                while(d.size()){
                    a.pb(d[d.size()-1]);
                    d.pop_back();
                    counts.pb(countswitches(a,d,c)+i+1);
                }
            }
            sort(b.begin(),b.end());
            e = b;
            FOR(i,0,max(2,int(log2(b.size())))){
                while(e.size()){
                    c.pb(e[e.size()-1]);
                    e.pop_back();
                    counts.pb(countswitches(a,e,c)+i+1);
                }
            }
            cout<<*min_element(counts.begin(),counts.end())<<endl;
            
            
        }
    }
}
