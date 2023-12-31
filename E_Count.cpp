#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    string s; cin >> s;

    int sum = 0;
    for(int i=0; i<s.size(); i++){
        sum += s[i] - '0';
        // we can subtract '0' from each character to get its integer value
    }

    cout << sum << '\n';

    return 0;
}