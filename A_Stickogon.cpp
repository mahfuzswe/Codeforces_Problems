#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>v;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            v.push_back(x);
        }

        set<int>s;
        for(int i=0; i<n; i++){
            int x = v[i];
            s.insert(x);
        }

        int nn = s.size();
        vector<int>tmp(nn, 0);

        vector<int>s_vec(s.begin(), s.end());

        for(int i=0; i<n; i++){
            for(int j=0; j<nn; j++){
                if(v[i] == s_vec[j]) tmp[j]++;
            }
        }

        int ans= 0;

        for(int i=0; i<nn; i++){
            ans += tmp[i]/3;
        }

        cout << ans << '\n';
        
    }

    return 0;
}