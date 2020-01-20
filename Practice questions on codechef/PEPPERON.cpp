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

int vec_sum(vector<int> v){
	int n = v.size();
	int score;
	FOR(i,0,n){
		if(i<n/2)
			score+=i;
		else
			score-=i;
	}
	return score;
}

int grid_sum(vector< vector<int> > v){
	int n = v[0].size();
	int score;
	FOR(i,0,n){
		score+= vec_sum(v[i]);
	}
	return abs(score);
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector< vector<int> > v(n);
		vector<int> sum;
		FOR(i,0,n)
		{
			vector<int> row;
			FOR(j,0,n){
				int el;
				cin>>el;
				row.pb(el);
			}
			v.pb(row);
		}
		sum.pb(grid_sum(v));
		/*for ( std::vector<std::vector<int> >::size_type i = 0; i < v.size(); i++ )
		{
		   for ( std::vector<int>::size_type j = 0; j < v[i].size(); j++ )
		   {
		      std::cout << v[i][j] << ' ';
		   }
		   std::cout << std::endl;
		}*/
		FOR(i,0,n){
			
			sum.pb(grid_sum(-1*v));
			
		}
		cout<<*min_element(sum.begin(), sum.end())<<endl;
	}
}









