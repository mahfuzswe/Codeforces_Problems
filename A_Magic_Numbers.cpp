#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int i=0, ck = 1;
    while(i<s.size()){
        if(i+2<s.size() and s.substr(i,3) == "144") i+=3;
        else if(i+1<s.size() and s.substr(i,2) == "14") i+=2;
        else if(s[i] == '1') i++;
        else{
        ck = 0;
            break;
        }
    }
    if(ck) cout << "YES\n";
    else  cout << "NO\n";

    return 0;
}