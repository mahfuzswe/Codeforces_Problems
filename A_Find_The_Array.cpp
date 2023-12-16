#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int s; cin >> s;
        if(s==1) cout << 1 << '\n';
        else if(s%6 ==0) cout << s / 6 << '\n';
        else cout << 3 << '\n';
    }
    
    return 0;
}