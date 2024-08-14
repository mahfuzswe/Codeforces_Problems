#include<bits/stdc++.h>
using namespace std;

// Inquilab Zindabad

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(s.size() >= 3 and s[0] == '1' and s[1] == '0' and s[2] != '0' and stoi(s.substr(2)) >= 2){
            cout << "YES\n";
        }else cout << "NO\n";
    }

    return 0;
}