#include<bits/stdc++.h>
using namespace std;

int main(){
    int q,n; cin>>q>>n;
    while(q--){
        int x; cin>>x;
        n = n ~ x;
        cout<<n<<'\n';
    }

    return 0;
}