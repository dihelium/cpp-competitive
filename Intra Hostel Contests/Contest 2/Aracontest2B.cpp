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

bool ispalindrome(string s){
    int flag = 0;
    for(int i = 0;i<s.length();++i){
        if(s[i]!=s[s.length()-i-1]){
            flag = 1;
            break;
        }
    }
    if(flag==0)
        return true;
    else
        return false;
}

int main()
{
    string s;
    cin>>s;
    if(ispalindrome(s)){
        
        string news;
        news.append(s,0,s.length()/2);
        news.append(s,s.length()/2,1);
        news.append(s,s.length()/2,(s.length()+1)/2);
        cout<<news<<endl;
    }
    else{
        int index=0;
        FOR(i,0,s.length()){
            if(s[i]!=s[s.length()-1-i]){
                index = i;
                break;
            }
        }
        string si,se,news;
        si.append(s,index,s.length()-2*index-1);
        se.append(s,index+1,s.length()-2*index-1);
        if(ispalindrome(si)){
            news.append(s,0,index);
            news.append(s,s.length()-index-1,1);
            news.append(s,index,s.length()-index);
            
            cout<<news<<endl;
        }
        else if(ispalindrome(se)){
            news.append(s,0,s.length()-index);
            news.append(s,index,1);
            news.append(s,s.length()-index,index);
            
            cout<<news<<endl;
            
        }
        else
            cout<<"NA"<<endl;
    }
}