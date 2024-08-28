#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){
   int t; cin>>t;
   while(t--){
        string s; cin>>s; 
        s = '0' + s;
        int n = s.size();

        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] >= '5'){
                s[i-1]++, 
                n=i;
            } 
        }
        for(int i=(s[0]=='0'); i<s.size(); i++){
            if(i >= n) cout<<'0';
            else cout<<s[i];
        }
        cout << '\n';
    }
    
    return 0;
}