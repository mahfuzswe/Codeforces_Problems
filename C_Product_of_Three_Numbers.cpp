#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        int a = n, b = n, c = n;
        for(int i=2; i*i<=n; i++){
            if(n%i == 0){
                a = i;
                break;
            }
        }

        n = n/a;

        for(int i=2; i*i<=n; i++){
            if(n%i == 0 && i!=a){
                b = min(b, i);
            }
        }

        c = n/b;

        if(a!=b && b!=c && c>1){
            cout << "YES\n";
            cout << a << " " << b << " " << c << '\n';
        }
        else cout << "NO\n"; 
    }

    return 0;
}