#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){

    int a,b,c,d; cin>>a>>b>>c>>d;

    if((a+b-c==d) || (a+b*c==d) || (a-b+c==d) || (a-b*c==d) || (a*b+c==d) || (a*b-c==d)){
        cout<<"YES\n";
    }else cout<<"NO\n";


    return 0;
}