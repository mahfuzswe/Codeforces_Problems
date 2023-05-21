#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;

        vector<pair<int, int>>a;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            a.push_back({x,i});
        }

        vector<int>b(n);
        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        vector<int>ans(n);
        for(int i=0; i<n; i++){
            ans[a[i].second] = b[i];
        }

        for(int i=0; i<n; i++){
            cout<<ans[i]<<" \n"[i==n-1];
        }
    }

    return 0;
}
