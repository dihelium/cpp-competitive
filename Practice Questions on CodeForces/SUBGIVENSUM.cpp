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
	int t;
	cin>>t;
	while(t--){
		int n,s;
		cin>>n>>s;
		int a[n];
		for(int i=0;i<n;i++){cin>>a[i];}
		int first=0,last=0,sum=0;
		for(int i=0;i<n;i++){
			while(sum<s){
				sum+=a[i];
				last++;
				i++;
			}
			//cout<<sum<<endl;
			

			while(sum>s){
				sum-=a[first];
				first++;
			}
			//cout<<sum<<endl;
			//cout<<i<<endl;cout<<first<<endl;cout<<last<<endl;			
			
			if(sum==s){
				cout<<first+1<<" "<<last<<endl;
				break;
			}
			//cout<<"s";
		}
		if(last==n-1&&first==n-2)
			cout<<-1<<endl;

	}
}

/*#include <iostream>
using namespace std;
#define FOR(i,a,b) for(int i = a; i < b; ++i)

pair<int,int> givenSum(int a[], int n, int sum){
    if(n<=0)
        return make_pair(-1,n);
    else if(a[0]==sum)
        return make_pair(0,n);
    else if(a[0]>sum)
        return make_pair(-1,n);
    else{
        return givenSum(a+1,n-1,sum-a[0]);
    }
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,s;
	    cin>>n>>s;
	    int flag = 0;
	    int a[n];
	    FOR(i,0,n)cin>>a[i];
	    FOR(i,0,n){
	        if(givenSum(a+i,n-i,s).first==-1)
	            ;
            else{
                flag = 1;
                cout<<i+1<<" "<<n - givenSum(a+i,n-i,s).second + 1<<endl;
                break;
            }
            
	    }
	    if(flag==0)
	        cout<<-1<<endl;
	    
	}
	return 0;
}*/