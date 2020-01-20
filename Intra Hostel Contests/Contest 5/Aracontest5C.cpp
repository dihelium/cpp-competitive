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
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int MOD = 1000000007;

int main()
{
    string s;
    cin>>s;
    if(s.length()<10){
        cout<<"NO";
        return 0;
    }
    string ss;
    ss.append(s,0,10);
    if(ss=="CODEFORCES"){
        cout<<"YES";
        return 0;
    }
    int flag = 1;
    string s0;
    s0.append(s,0,1);
    if(s0!="C"){
        int index = 0;
        FOR(i,1,s.length()){
            string si;
            si.append(s,i,1);
            if(si=="C"){
                index = i;
                break;
            }
        }
        string sc;
        sc.append(s,index+1,s.length()-index-1);
        if(sc!="ODEFORCES"){
            flag=0;
            
        }
    }
    else{
        string s1;
        s1.append(s,1,1);
        if(s1!="O"){
            
            string sc;
            sc.append(s,s.length()-9,9);
            if(sc!="ODEFORCES"){
                flag=0;
            }
            
        }
        else{
            string s2;
            s2.append(s,2,1);
            if(s2!="D"){
                
                string sc;
                sc.append(s,s.length()-8,8);
                if(sc!="DEFORCES"){
                    flag=0;
                }
                
            }
            else{
                string s3;
                s3.append(s,3,1);
                if(s3!="E"){
                    
                    string sc;
                    sc.append(s,s.length()-7,7);
                    if(sc!="EFORCES"){
                        flag=0;
                    }
                    
                }
                else{
                    string s4;
                    s4.append(s,4,1);
                    if(s4!="F"){
                        
                        string sc;
                        sc.append(s,s.length()-6,6);
                        if(sc!="FORCES"){
                            flag=0;
                        }
                        
                    }
                    else{
                        string s5;
                        s5.append(s,5,1);
                        if(s5!="O"){
                            
                            string sc;
                            sc.append(s,s.length()-5,5);
                            if(sc!="ORCES"){
                                flag=0;
                            }
                            
                        }
                        else{
                            string s6;
                            s6.append(s,6,1);
                            if(s6!="R"){
                                
                                string sc;
                                sc.append(s,s.length()-4,4);
                                if(sc!="RCES"){
                                    flag=0;
                                }
                                
                            }
                            else{
                                
                                    string s7;
                                    s7.append(s,7,1);
                                    if(s7!="C"){
                                        
                                        string sc;
                                        sc.append(s,s.length()-3,3);
                                        if(sc!="CES"){
                                            flag=0;
                                        }
                                        
                                    }
                                    else{
                                        string s8;
                                        s8.append(s,8,1);
                                        if(s8!="E"){
                                            
                                            string sc;
                                            sc.append(s,s.length()-2,2);
                                            if(sc!="ES"){
                                                flag=0;
                                            }
                                            
                                        }
                                        else{
                                            string s9;
                                            s9.append(s,9,1);
                                            if(s9!="S"){
                                                string send;
                                                send.append(s,s.length()-1,1);
                                                if(send!="S"){
                                                    flag=0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        
    
    if(flag==0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}
