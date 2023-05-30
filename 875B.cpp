#include<bits/stdc++.h>

using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        int a[n], b[n];
        set<int>s;
        for(int i=0; i<n; i++){
            cin>>a[i];
            s.insert(a[i]);
        }

        for(int i=0; i<n; i++){
            cin>>b[i];
            s.insert(b[i]);
        }

        int c = 1;
        map<int, int> mm, mm2;

        for(int i=1; i<n; i++){
            if(a[i] == a[i-1]){
                c++;
            }else{
                mm[a[i-1]] = max(mm[a[i-1]], c);
                c = 1;
            }
        }
        mm[a[n-1]] = max(mm[a[n-1]], c);

        c = 1;
        for(int i=1; i<n; i++){
            if(b[i]==b[i-1]){
                c++;
            }else{
                mm2[b[i-1]] = max(mm2[b[i-1]], c);
                c = 1;
            }
        }
        mm2[b[n-1]] = max(mm2[b[n-1]], c);

        int ans = 0;
        for(auto i : s){
            ans = max(ans, mm[i] + mm2[i]);
        }cout<<ans<<endl;

    }

    return 0;
}