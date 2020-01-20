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

int maxm(int a, int b){
	return (a>b)?a:b;
}

int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int valV = maxm(3*a/10,a - (a/250)*c);
	int valM = maxm(3*b/10,b - (b/250)*d);
	if(valV>valM)
		cout<<"Misha"<<endl;
	else if(valM>valV)
		cout<<"Vasya"<<endl;
	else
		cout<<"Tie"<<endl;
}