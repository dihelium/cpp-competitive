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

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int d,h;
		cin>>d>>h;
		int b = max(d,h);
		int a = min(d,h);
		if(a==0&&b==0)
			cout<<0<<endl;
		else if(a<=0)
			cout<<-1<<endl;
		else if(a==b)
			cout<<b<<endl;
		else if(b<=2*a)
			cout<<b+1<<endl;
		else
			cout<<floor(log2(b/a))+b+1<<endl;


	}
	return 0;
}