#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    
    int t; cin>>t;
    while(t--){
        ll m,n; cin>>m>>n;
        ll tso[m];
        ll ten[n];

        ll sum1 = 0;
        ll sum2 = 0; 

        for(int i=0; i<m; i++){
            cin>>tso[i];
            sum1 += tso[i];
        }

        for(int i =0; i<n; i++){
            cin>>ten[i];
            sum2 += ten[i];
        }

        if(sum1>sum2){
            cout<<"Tsondu\n";
        }else if(sum1<sum2){
            cout<<"Tenzing\n";
        }else cout<<"Draw\n";
    }
    
    return 0;
}

