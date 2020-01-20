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

int a[1111];

bool palindrome(int arr[], int n) 
{ 
    // Initialise flag to zero. 
    bool flag = 1; 
  
    // Loop till array size n/2. 
    for (int i = 0; i <= n / 2 && n != 0; i++) { 
  
        // Check if first and last element are different 
        // Then set flag to 1. 
        if (arr[i] != arr[n - i - 1]) { 
            flag = 0;
            break; 
        } 
    } 
    return flag;
  
} 

bool diffElement(int arr[], int n)
{
	bool flag = 0;
	FOR(i,0,n-1){
		if(arr[i]-arr[i+1]==0||arr[i]-arr[i+1]==-1)
			flag = 1;
	}
	return flag;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		FOR(i,0,n)cin>>a[i];
		int flag = 0;
		if(palindrome(a,n)==1)
			if(diffElement(a,floor(n/2))==1)
				if(*std::max_element(a,a+n-1)==7 && *std::min_element(a,a+n-1)==1)
					flag = 1;
		if(flag==1)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;

	}
}