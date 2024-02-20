#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s = "codeforces";
        string ss; cin >> ss;
        int ans = 0;
        for(int i=0; i<10; i++){
            if(s[i] != ss[i]) ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}