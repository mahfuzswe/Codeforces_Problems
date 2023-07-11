#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n=1, m=0;
        string s; cin>>n;

        if(n<=3){
            if(n==1) cout<<"1\n";
            if(n==2) cout<<"1 2\n";
            if(n==3) cout<<"1 2 3\n";

            return;
        }

        cout<<"2 ";
        for(int i=4; i<=n/2+2; i++) cout<<i<<" ";
        cout<<"1 ";
        for(int i=n/2+3; i<=n; i++) cout<<i<<" ";
        cout<<"3\n";
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}