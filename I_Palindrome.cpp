#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int n; cin>>n;
    
    int temp = n;
    int reverse = 0;
    int last_digit;

    while(n!=0){
        last_digit = n%10;
        reverse = (reverse*10)+last_digit;
        n = n/10;
    }

    cout<<reverse<<'\n';
    if(temp == reverse) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}