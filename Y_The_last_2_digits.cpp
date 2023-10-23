#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int a,b,c,d; cin>>a>>b>>c>>d;

    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;

    int tmp = a*b*c*d;

    int ld = tmp%10;
    tmp /= 10;
    int l2d = tmp%10;


    cout<<l2d<<ld<<'\n';
    
    return 0;
}