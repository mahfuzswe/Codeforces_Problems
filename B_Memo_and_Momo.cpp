#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int a,b,k; cin>>a>>b>>k;

    if(a%k==0 && b%k!=0) cout<<"Memo\n";
    else if(b%k==0 && a%k==0) cout<<"Both\n";
    else if(b%k==0 && a%k!=0) cout<<"Momo\n"; 
    else cout<<"No One\n";

    return 0;
}