#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll t; cin>>t;
    while(t--){
        ll a,b; cin>>a>>b;
        ll n,m; cin>>n>>m;

        if(m>n){
            if(a<=b) cout<<n*a<<endl;
            else cout<<n*b<<endl;  
        }else{

            if((m*a)<((m+1)*b)){
                ll net = n-(m+1);
                ll net2 = (m*a)+(net*b);
                cout<<net2<<endl;
            }
            else cout<<"Try another approch"<<endl;
            
        }
    }
    
    return 0;
}
