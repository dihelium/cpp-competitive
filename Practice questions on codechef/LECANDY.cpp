#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int c;
		cin>>n>>c;
		int a[n];
		int sum=0;
		for (int i = 0;i<n;++i)
			{
				cin>>a[i];
				sum+=a[i];
			}	
		if(sum<=c)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}