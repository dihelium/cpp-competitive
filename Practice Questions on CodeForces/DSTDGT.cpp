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

bool comp(int a, int b) 
{ 
    return (a < b); 
} 

int main()
{
	int l,r;
	cin>>l>>r;
	if(r%10==0&&l==r-1)
		cout<<-1;
	else if(r%10==0)
		cout<<r-1;
	else{
	int left = l,right = r;
	vector<int> vl;
	while(left>0){
		 int q = left/10;
		 int rem = left - q*10;
		 vl.push_back(rem);
		 left = q;
	}

	vector<int> vr;
	while(right>0){
		 int q = right/10;
		 int rem = right - q*10;
		 vr.push_back(rem);
		 right = q;
	}
	vector<int> ::iterator it;
	std::reverse(vl.begin(),vl.end());
	int found,flagNUM = 0,flag;
	for(int i = l+1;  i<(r<pow(10,vl.size())-1)?r:pow(10,vl.size())-1;  ++i){  //r,pow(10,vl.size())-1
		for(int j = 0;j<vl.size();++i){
			flag = 1;
			it = std::find (vl.begin()+j, vl.end(),vl[j]);
			if(it!=vl.end()){
				flag = 0;
				break;
			}
		}
	if(flag==1){
		found = i;
		flagNUM = 1;
		break;
	}	

	}
	if(flagNUM==1)
		cout<<found;
	else if(flagNUM==0&&r<pow(10,vl.size())){
		cout<<-1;
	}
	else if(flagNUM==0&&r>=pow(10,vl.size())){
		int num;
		if(r%100==0){
			if(r==10)
			{
				cout<<-1;

			}
			else{
				cout<<10;

			}
		}
		else
		{
			int num = 10;
			for(int i = 0;i<vr.size()-2;++i)
				{num = num*10 + i+2;}
			if(num>=r)
				{cout<<-1;
	}
			 else
			 	{cout<<num;
}

		}

	}
	}
	
}


