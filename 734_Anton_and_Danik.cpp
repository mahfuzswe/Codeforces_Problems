// 181819991	Nov/21/2022 02:25UTC+6	mr.phoenix	734A - Anton and Danik	GNU C++17	Accepted	30 ms	100 KB

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin>>n;
    
    char s[n];
    int cntA=0,cntD=0;

    for(int i=0; i<n; i++){
            cin>>s[i];
            if(s[i]=='A') cntA++;
            else cntD++;
        }

    if(cntA>cntD) cout<<"Anton\n";
    else if(cntD>cntA) cout<<"Danik\n";
    else cout<<"Friendship\n";
    
    
    return 0;
}

