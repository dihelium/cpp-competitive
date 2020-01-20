#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,k,n;
		cin>>x>>y>>k>>n;
		int p[n],c[n];
		for(int i=0;i<n;++i)
		{
			cin>>p[i]>>c[i];
		}
		int flag = 0;
		for(int i=0;i<n;++i)
		{
			if(x-y<=p[i]&&k>=c[i])
			{
				flag = 1;
				break;
			}
		}
		if(flag==0)
			cout<<"UnluckyChef"<<endl;
		else
			cout<<"LuckyChef"<<endl;

	}
	return 0;
}