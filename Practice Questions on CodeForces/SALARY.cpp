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

int a[1111];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum = 0;
		cin>>n;
		
		for(int i=0;i<n;++i)
		{	
			cin>>a[i];
			
		}
		
		sort(a,a+n);

		for(int i=1;i<n;++i){
			a[i]-=a[0];
			sum+=a[i];
		}

		cout<<sum<<endl;

	}
	return 0;
}