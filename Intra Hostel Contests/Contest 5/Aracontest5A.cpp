/*
 // Sample code to perform I/O:
 
 cin >> name;                            // Reading input from STDIN
 cout << "Hi, " << name << ".\n";        // Writing output to STDOUT
 
 // Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
 */

// Write your code here
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

int main()
{
    string s;
    cin>>s;
    if(s.length()==1){
        if(s=="1"){
            cout<<"one";
        }
        else if(s=="2"){
            cout<<"two";
        }
        else if(s=="3"){
            cout<<"three";
        }
        else if(s=="4"){
            cout<<"four";
        }
        else if(s=="5"){
            cout<<"five";
        }
        else if(s=="6"){
            cout<<"six";
        }
        else if(s=="7"){
            cout<<"seven";
        }
        else if(s=="8"){
            cout<<"eight";
        }
        else if(s=="9"){
            cout<<"nine";
        }
        else{
            cout<<"zero";
        }
        
    }
    
    else{
        
        string s0;
        s0.append(s,0,1);
        if(s0=="1"){
            string s1;
            s1.append(s,1,1);
            if(s1=="1"){
                cout<<"eleven";
            }
            else if(s1=="2"){
                cout<<"twelve";
            }
            else if(s1=="3"){
                cout<<"thirteen";
            }
            else if(s1=="4"){
                cout<<"fourteen";
            }
            else if(s1=="5"){
                cout<<"fifteen";
            }
            else if(s1=="6"){
                cout<<"sixteen";
            }
            else if(s1=="7"){
                cout<<"seventeen";
            }
            else if(s1=="8"){
                cout<<"eighteen";
            }
            else if(s1=="9"){
                cout<<"nineteen";
            }
            else{
                cout<<"ten";
            }
        }
        else if(s0=="2"){
            cout<<"twenty";
        }
        else if(s0=="3"){
            cout<<"thirty";
        }
        else if(s0=="4"){
            cout<<"forty";
        }
        else if(s0=="5"){
            cout<<"fifty";
        }
        else if(s0=="6"){
            cout<<"sixty";
        }
        else if(s0=="7"){
            cout<<"seventy";
        }
        else if(s0=="8"){
            cout<<"eighty";
        }
        else if(s0=="9"){
            cout<<"ninety";
        }
        ;
        if(s0!="1"){
            string s1;
            s1.append(s,1,1);
            if(s1=="0"){
                if(s0=="0")
                    cout<<"zero";
            }
            else if(s1=="1"){
                if(s0=="0")
                    cout<<"one";
                else
                    cout<<"-one";
            }
            else if(s1=="2"){
                if(s0=="0")
                    cout<<"two";
                else
                    cout<<"-two";
            }
            else if(s1=="3"){
                if(s0=="0")
                    cout<<"three";
                else
                    cout<<"-three";
            }
            else if(s1=="4"){
                if(s0=="0")
                    cout<<"four";
                else
                    cout<<"-four";
            }
            else if(s1=="5"){
                if(s0=="0")
                    cout<<"five";
                else
                    cout<<"-five";
            }
            else if(s1=="6"){
                if(s0=="0")
                    cout<<"six";
                else
                    cout<<"-six";
            }
            else if(s1=="7"){
                if(s0=="0")
                    cout<<"seven";
                else
                    cout<<"-seven";
            }
            else if(s1=="8"){
                if(s0=="0")
                    cout<<"eight";
                else
                    cout<<"-eight";
            }
            else if(s1=="9"){
                if(s0=="0")
                    cout<<"nine";
                else
                    cout<<"-nine";
            }
        }
    }
    
}
