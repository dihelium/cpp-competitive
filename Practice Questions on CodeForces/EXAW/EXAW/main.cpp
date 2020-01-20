#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
  int count = 0;
  string word,input;
  cin>>word;
  string line;
  vector<string> list;
  while (getline(cin, line)) {
    if (line == "\n")
        break;

    input += " " + line;
 }
  string wuld = "";
  for (auto x : line)
   {
       if (x == ' ')
       {
           list.push_back(wuld);
           wuld = "";
       }
       else
       {
           wuld = wuld + x;
       }
   }
   list.push_back(wuld);
 
  vector<int> wo;
  for(int i = 0;i < word.length();++i){
    vector<int>::iterator j;
    j = find(wo.begin(),wo.end(),word[i]);
    if(j==wo.end())
      wo.push_back(int(word[i]));
  }
  sort(wo.begin(),wo.end());
  for(int i =0;i<list.size();++i){
    vector<int> comp;
    for(int k =0;k<list[i].length();++k){
      vector<int>::iterator j;
      j = find(comp.begin(),comp.end(),list[i][k]);
      if(j==comp.end())
      {wo.push_back(int(list[i][k]));}
    }
    sort(comp.begin(),comp.end());
    for(int g = 0;g<comp.size();++g){
      cout<<comp[g]<<" ";
    }
    if(wo==comp){
      count++;
    }
  }
  cout<<count;
  return 0;
}
