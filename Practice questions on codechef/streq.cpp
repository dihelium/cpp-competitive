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
		string s1, s2;
		cin>>s1>>s2;
		if(s1.length()!=s2.length())
			cout<<"NO"<<endl;
		else{
			vector<char> v1, v2;
			int flag = 0;
			std::vector<char>::iterator it,jt;
			for(int i = 0;i<s1.length();++i){
				it = std::find (v1.begin(), v1.end(), s1[i]);
				if (it == v1.end()){
					v1.pb(s1[i]);
					jt = std::find (v2.begin(), v2.end(), s1[i]);
					if(jt != v2.end()){
						flag = 1;
						break;
					}
				}
			}
			if(flag==1){
				cout<<"YES"<<endl;
			}
			else
				cout<<"NO"<<endl;
		}
	}
}