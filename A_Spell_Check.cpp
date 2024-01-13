#include<bits/stdc++.h>
using namespace std;

int main(){
    string ans = "Timur";

    sort(ans.begin(), ans.end());

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s ; cin >> s;

        if(n == 5){
            sort(s.begin(), s.end());
            if(s == ans) cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "NO\n";
    }

    return 0;
}