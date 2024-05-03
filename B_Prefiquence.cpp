#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        string a, b; cin >> a >> b;
        int x = 0;

        for(int i=0; i<m && x < n; i++){
            if(a[x] == b[i]) x++;
        }
        cout << x << '\n';
    }

    return 0;
}