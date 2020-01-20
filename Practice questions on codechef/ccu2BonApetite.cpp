#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;

		pair<int,pair<int,int>> p[n];
		int a,b,c;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b>>c;
			p[i].first = c;
			p[i].second.first = b;
			p[i].second.second = a;
		}

		sort(p,p+n);
		int curr = 0,sum = 0;
		for(int i=0;i<n;i++)
		{
			curr = p[i].first;
			sum++;
			int last = p[i].second.first;
			i++;
			while(p[i].first==curr && i<n)
			{
				if(p[i].second.second>=last)
				{
					sum++;
					last = p[i].second.first;
				}
				i++;
			}
			i--;
		}
		cout<<sum<<"\n";
	}
	return 0;
}