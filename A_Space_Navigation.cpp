#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0) -> ios_base::sync_with_stdio(0);

    int t; cin >> t;
    while(t--){
        int x, y; 
        cin >> x >> y;

        string s; cin >> s;

        int up = 0, down = 0, left = 0, right = 0;
        for(char &c : s){
            if(c == 'U') up++;
            if(c == 'D') down++;
            if(c == 'L') left++;
            if(c == 'R') right++;
        }

        bool canReach = 1;
        if(x > 0 and right < x) canReach = 0;
        if(x < 0 and left < -x) canReach = 0;
        if(y > 0 and up < y) canReach = 0;
        if(y < 0 and down < -y) canReach = 0;

        cout << (canReach ? "YES" : "NO") << '\n';
    }

    return 0;
}