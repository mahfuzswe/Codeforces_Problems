#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        int one = 0, zero = 0;
        for(auto i: s){
            if(i == '0') zero++;
            else one++;
        }

        if(zero == 1 || zero%2 == 0) cout << "BOB\n";
        else cout << "ALICE\n";
    }

    return 0;
}