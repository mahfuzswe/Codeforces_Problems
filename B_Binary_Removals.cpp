#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int oo = s.find("11");
        int zz = s.rfind("00");

        if(oo != -1 and zz != -1 and oo < zz) cout << "NO\n"; // std::string::npos =~ -1
        else cout << "YES\n";
    }

    return 0;
}