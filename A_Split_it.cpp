#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        string s; cin >> s;

        if(n < (2*k)+1) cout << "NO\n";
        else{
            bool ck = true;
            for(int i=0; i<k; i++){
                if(s[i] != s[n-i-1]){
                    ck = false;
                    break;
                }
            }
            if(ck) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    
    return 0;
}