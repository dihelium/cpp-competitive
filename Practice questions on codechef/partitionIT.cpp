#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int rookie(string string1,string string2);
int num_ways(string str);
int secondStringCheck(string string1, string string2);

int secondStringCheck(string string1, string string2)
{
    int flag = 1;
    string temp = "";
    for(int i = 0;i<string1.length();++i)
    {
        temp = string1[i];
        if(temp.compare(string2)>0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int rookie(string string1,string string2)
{   int num=0;
    if(string1.length()==1&&string2.length()==1&&string1.compare(string2)<=0)
        num = 1;
    else if(string1.length()!=1&&secondStringCheck(string1,string2)==1&&string2.length()==1&&string1.compare(string2)<=0)
        num = 1 + num_ways(string1);
    else if(string1.length()==1&&string2.length()!=1&&string1.compare(string2)<=0)
        num = 1 + num_ways(string2);
    else if(string1.compare(string2)<=0&&secondStringCheck(string1,string2)==1)
        num = 1 + num_ways(string1) + num_ways(string2);
    return num;
}

int num_ways(string str)
{
    int ways = 0;
    
    for(int i = 0;i<str.length()-1;++i)
    {
        string string1 = "";
        if(i==0)
        {
            string1 = str[0];
        }
        else
        {for(int j = 0;j<i;++j)
            {
                string1 = string1 + str[j];
            }
            
        }
        string string2 = "";
        for(int j = 0;j<=i;++j)
        {    
            string2 = str;
            reverse(begin(string2),end(string2));
            string2.pop_back();
            reverse(begin(string2),end(string2));
        }      
        ways += rookie(string1,string2);
    }
    
    return ways;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    string str;
    cin>>str;
    cout<<num_ways(str);
    return 0;
}

