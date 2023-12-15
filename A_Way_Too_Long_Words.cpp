#include<bits/stdc++.h>
using namespace std;

int main(){
    int q; cin>>q;
    while(q--){
        string s; cin>>s;
        if(s.size() > 10){
            int n = s.size()-2;
            char first = s[0];
            char last = s[n+1];
            cout << first << n << last << '\n';
        }
        else cout << s << '\n';
    }

    return 0;
}