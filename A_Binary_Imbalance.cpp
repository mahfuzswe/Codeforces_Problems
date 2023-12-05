#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        char arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        bool flag = false;

        for(int i=0; i<n; i++){
            if(arr[i]=='0') flag = true;
        }
        
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}