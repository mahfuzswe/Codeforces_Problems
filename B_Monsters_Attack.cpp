#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n], x[n];

        for(int i=0; i<n; i++){
            cin >> a[i]; // health
        }

        for(int i=0; i<n; i++){
            cin >> x[i]; // cordinate
        }

        set<int>pos;
        set<int>neg;

        for(int i=0; i<n; i++){
            if(x[i] > 0){
                int y = x[i];
                pos.insert(y)
            }else{
                y = x[i];
                neg.insert(y);
            }
        }

        

    }

    return 0;
}