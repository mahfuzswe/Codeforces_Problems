#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int ans1 = 10, ans2 = 10;
        
        int x = 0, y = 0;
        for(int i=0; i<10; i++){
            int baki = (10-i+1)/2;
            if(x > y + baki){
                ans1 = i;
                break;
            }
            if(i%2 == 0){
                if(s[i] != '0'){
                    x++;
                }
            }
            else{
                if(s[i] == '1'){
                    y++;
                }
            }
        }
        x = 0, y = 0;
        for(int i=0; i<10; i++){
            int baki = (10-i)/2;
            if(y>x+baki){
                ans2 = i;
                break;
            }
            if(i%2 == 1){
                if(s[i] != '0') y++;
            }
            else{
                if(s[i] == '1') x++;
            }
        }

        // cout << ans1 << " " << ans2 << '\n';
        cout << min(ans1, ans2) << '\n';
    }

    return 0;
}