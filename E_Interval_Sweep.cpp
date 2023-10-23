#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int a,b; cin>>a>>b;
    if(a==0 && b==0) cout<<"NO\n";
    else if(abs(a-b)==0 || abs(a-b)==1) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}