#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int left = 0;
        int right = 0;
        for(int i=0; i<n; i++){
            if(s[i] == 'B'){
                left = i;
            }else continue; 
        }
        for(int i=n; i>=0; i--){
            if(s[i] == 'B'){
                right = i;
            }else continue;
        }

        int ans = right - left;

        cout << abs(ans)+1 << '\n';
    } 
    return 0;
}