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

int fairornot(int a1, int a2, int a3, int c1, int c2, int c3){
	if(a1<a2&&c1>=c2)
		return 0;
	if(a1<a3&&c1>=c3)
		return 0;
	if(a2<a3&&c2>=c3)
		return 0;
	if(a1==a2&&c1!=c2)
		return 0;
	if(a1==a3&&c1!=c3)
		return 0;
	if(a2==a3&&c2!=c3)
		return 0;
	if(a2<a1&&c2>=c1)
		return 0;
	if(a3<a1&&c3>=c1)
		return 0;
	if(a3<a2&&c3>=c2)
		return 0;
	return 1;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int age1,age2,age3,coins1,coins2,coins3;
		cin>>age1>>age2>>age3>>coins1>>coins2>>coins3;
		
		if(fairornot(age1,age2,age3,coins1,coins2,coins3)==1)
			cout<<"FAIR"<<endl;
		else
			cout<<"NOT FAIR"<<endl;

	}
}