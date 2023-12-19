#include<bits/stdc++.h>
using namespace std;

int scnd(string s){ // second non-zero index
    int cnt = 0;
    for(int i=0; i<s.size(); ++i){
        if(s[i] != '0'){
            cnt++;
            if(cnt > 1) return i;
        }
    }
    return -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;

        string a, b;

        if(s[0] != '0' && s[1] != '0'){
            a.push_back(s[0]);

            for(int i=1; i<s.size(); i++){
                b.push_back(s[i]);
            }

            int aa = stoi(a);
            int bb = stoi(b);

            if(aa < bb) cout << aa << " " << bb << '\n';
            else cout << -1 << '\n';

        }else{
            int xx = scnd(s);
            for(int i=0; i<xx; ++i){
                a.push_back(s[i]);
            }

            for(int i=xx; i<s.size(); ++i){
                b.push_back(s[i]);
            }

            int aa = stoi(a);
            int bb = stoi(b);

            if(aa < bb) cout << aa << " " << bb << '\n';
            else cout << -1 << '\n';
        }
    }

    return 0;
}