#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;

    int n8 = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '8') n8++;
    }
    int exp = n / 11;

    if(n8 >= exp) cout << exp << '\n';
    else cout << n8 << '\n';

    return 0;
}