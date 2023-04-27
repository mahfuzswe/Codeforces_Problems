#include<bits/stdc++.h>
using namespace std;


int main(){

    int q; cin>>q;
    while(q--){
       int n,t; cin>>n>>t;

       int a[n], b[n], ans = -1, ansind = -1;
       for(int i=0; i<n; i++) cin>>a[i];
       for(int i=0; i<n; i++){
            cin>>b[i];
            if(a[i]+1 <= t && b[i]>ans){
                ans = b[i];
                ansind = i+1;
            }
       }
       cout<<ansind<<endl;

    }

    return 0;
}


