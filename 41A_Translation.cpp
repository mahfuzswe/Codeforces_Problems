// 181823536	Nov/21/2022 03:26UTC+6	mr.phoenix	41A - Translation	GNU C++17	Accepted	30 ms	0 KB

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string s,t; cin>>s>>t;
    
    reverse(s.begin(),s.end());

    if(s==t) cout<<"YES\n";
    else cout<<"NO\n";
    
    return 0;
}

