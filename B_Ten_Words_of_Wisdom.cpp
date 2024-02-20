#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        int bb = -1;
        int idx;
        for(int i=1; i<=n; i++){
            int a, b; cin >> a >> b;
            if(a > 10) continue;
            else{
                if(b > bb){
                    bb = b;
                    idx = i;
                } 
            }    
        }

        bb = 0;
        cout << idx << '\n';
    }


    return 0;
}