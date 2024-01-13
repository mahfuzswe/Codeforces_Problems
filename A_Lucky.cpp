#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    
    while(t--){
        string s; cin >> s;

        int s1 = 0;
        int s2 = 0;

        for(int i = 0; i < s.size()/2; i++){
            int x = s[i] - '0';
            s1 += x;
        }

        for(int i = s.size()/2; i < s.size(); i++){
            int x = s[i] - '0';
            s2 += x;
        }
        
        if(s1 == s2) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}