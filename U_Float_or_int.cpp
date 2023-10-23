#include<bits/stdc++.h>
using namespace std;


int main(){
    double n; cin>>n;
    int ans = (int)n;

    double f_ans = n-ans;

    if(n==ans) cout<<"int "<<ans<<'\n';
    else cout<<"float "<<ans<<" "<<f_ans<<'\n';

    return 0;
}