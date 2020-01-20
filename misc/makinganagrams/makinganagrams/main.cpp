#include <iostream>
#include<string>
#include<algorithm>
#include<stdlib.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    int alen = a.length();
    int blen = b.length();
    if(a.length()>b.length()){
        string temp = a;
        a = b;
        b = temp;
    }
    int count=0;
    for(int i = a.length()-1;i>=0;--i){
        int flag = 0;
        int iter = b.length();
        for(int j =0;j<b.length();++j){
            if(b[j]==a[i]){
                iter = j;
                break;
            }
        }
        if(iter!=b.length()){
            count+=2;
            a.erase(i,1);
            b.erase(iter,1);
        }
    }
    return alen + blen - count;
}

int main()
{
    string a,b;
    cin>>a>>b;
    cout<<makeAnagram(a,b);
    
    
    return 0;
}

