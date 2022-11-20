// 181822704	Nov/21/2022 03:10UTC+6	mr.phoenix	266B - Queue at the School	GNU C++17	Accepted	30 ms	0 KB

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n,t; cin>>n>>t;
    string s; cin>>s;

    while(t--){
        for(int i=0; i<n; i++){
            if(s[i]=='G' && s[i-1]=='B'){
                s[i]='B';
                s[i-1]='G';
                i++;
            }
        }
    }
    cout<<s<<endl;
    
    return 0;
}

