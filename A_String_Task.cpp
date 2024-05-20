#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    string s; cin >> s;

    for(auto x: s){
        x = tolower(x);

        if(!(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y')){
            cout << '.' << x;
        }
    }
    cout << '\n';

    return 0;
}