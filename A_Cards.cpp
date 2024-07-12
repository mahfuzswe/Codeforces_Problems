#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n; cin >> n;
    string s; cin >> s;

    int N = count(s.begin(), s.end(), 'n');
    int R = count(s.begin(), s.end(), 'r');

    while (N--) cout << "1 ";
    while(R--) cout << "0 ";
    cout << '\n';    

    return 0;
}