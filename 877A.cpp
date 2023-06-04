#include<bits/stdc++.h>
using namespace std;

typedef long long ll; 

int main(){
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        
        int mn = INT_MAX, mx = INT_MIN;

        for(int i=0; i<n; i++){
            int a; cin>>a;
            mn = min(mn, a);
            mx = max(mx, a);
        }
        if(mn<0) cout<<mn<<"\n";
        else cout<<mx<<"\n";
    }
    
    return 0;
}

