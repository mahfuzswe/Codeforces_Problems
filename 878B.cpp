#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int i = 0;
        while((1<<i) <= n) i++;
        if((1<<i) > n) i--;
        if(k>i) cout<<n+1<<"\n";
        else cout<<(1<<k)<< "\n";
    }

    return 0;
}