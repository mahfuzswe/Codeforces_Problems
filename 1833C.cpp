#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        int mn1 = INT_MAX, mn2 = INT_MAX;
        int odd = 0, even = 0;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            if(x%2){
                odd++;
                mn1 = min(mn1,x);
            }else{
                even++;
                mn2 = min(mn2, x);
            }
        }

        if(odd == n || even ==n || mn2 - mn1 > 0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}
