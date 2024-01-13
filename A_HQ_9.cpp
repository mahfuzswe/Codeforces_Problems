#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;

    bool ck = false;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9' || s[i] == '+'){
            ck = true;
            break;
        }
    }

    if(ck) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}