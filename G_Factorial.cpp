#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin>>t;
    int fact = 1;
    while(t--){
        int n; cin>>n;
        for(int i=n; i>=1; i--){
            fact *= i;
        }
        cout<<fact<<'\n';
        fact = 1;
    }

    return 0;
}