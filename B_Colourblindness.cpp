#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s1, s2; cin >> s1 >> s2;

        cin.ignore();
        for(int i=0; i<n; i++){
            if(s1[i] == 'G') s1[i] = 'B';
        }

        for(int i=0; i<n; i++){
            if(s2[i] == 'G') s2[i] = 'B';
        }

        bool ck = 1;

        for(int i=0; i<n; i++){
            if(s1[i] != s2[i]){
                ck = 0;
                break;
            }
        }

        if(ck) cout << "YES\n";
        else cout << "NO\n";
        
    }


    return 0;
}